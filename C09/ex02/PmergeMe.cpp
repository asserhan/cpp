#include "PmergeMe.hpp"
#include <climits>
PmergeMe::PmergeMe() {

}
bool isDupluicate(std::vector<int> &v, int value){
    for(size_t i = 0; i < v.size(); i++){
        if(v[i] == value)
            return true;
    }
    return false;
}
PmergeMe::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i++){
        std::string str = av[i];
        if(str.find_first_not_of("0123456789 +/t") != std::string::npos)
            throw std::invalid_argument("Error");
        if(str.compare("") == 0)
            throw std::invalid_argument("Error");
        long value = std::atol(str.c_str());
        if(value > std::numeric_limits<int>::max())
            throw std::invalid_argument("Error");
        if(isDupluicate(this->unsVector, value) == true)
            throw std::invalid_argument("Error");
        this->unsVector.push_back(value);
        this->unsdDeque.push_back(value);

    }
}
PmergeMe::PmergeMe(const PmergeMe &oobj) {
    *this = oobj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &oobj) {
    if (this != &oobj){
        this->unsVector = oobj.unsVector;
        this->unsdDeque = oobj.unsdDeque;
        this->soredVector = oobj.soredVector;
        this->soredDeque = oobj.soredDeque;
    }
    return *this;
}

PmergeMe::~PmergeMe() {

}
template <class T>
bool isSorted(T &container){
    for (size_t i = 0; i < container.size() - 1; i++){
        if (container[i] > container[i + 1])
            return false;
    }
    return true;
}

std::vector<std::pair<int, int> > splitVecor(std::vector<int> &v){
    std::vector<std::pair<int, int> > pairs;
    for(size_t i = 0; i < v.size(); i++){
        if(i % 2== 0 )
            pairs.push_back(std::make_pair(v[i], v[i + 1]));
    }
    return pairs;
}
void Merge(std::vector<std::pair<int, int> > &left, std::vector<std::pair<int, int> > &right, std::vector<std::pair<int, int> > &pairs){
    int leftsize = pairs.size() / 2;
    int rightsize = pairs.size() - leftsize;
    int i = 0, l = 0, r = 0;
    while(l < leftsize && r < rightsize){
        if(left[l].first < right[r].first){
            pairs[i] = left[l];
            l++;
        }else{
            pairs[i] = right[r];
            r++;
        }
        i++;
    }
    while(l < leftsize){
        pairs[i] = left[l];
        l++;
        i++;
    }
    while(r < rightsize){
        pairs[i] = right[r];
        r++;
        i++;
    }

}
void MergeSortPairs(std::vector<std::pair<int, int> > &pairs){
   int len = pairs.size();
    if(len <= 1) // base case
       return;
    int mid = len / 2;
    std::vector<std::pair<int, int> > left = std::vector<std::pair<int, int> >(pairs.begin(), pairs.begin() + mid);
    std::vector<std::pair<int, int> > right = std::vector<std::pair<int, int> >(pairs.begin() + mid, pairs.end());
    MergeSortPairs(left);
    MergeSortPairs(right);
    Merge(left, right, pairs);
}
std::vector<int> GetJacobhallSeq(int size){
    std::vector<int> JacobhallSeq;
    JacobhallSeq.push_back(0);
    JacobhallSeq.push_back(1);
    for(int i = 2; i < size; i++){
        JacobhallSeq.push_back(JacobhallSeq[i - 1] + 2 * JacobhallSeq[i - 2]);
    }
    JacobhallSeq.erase(JacobhallSeq.begin());
    JacobhallSeq.erase(JacobhallSeq.begin());
    return JacobhallSeq;
}
std::vector<int> GetIndexSeq(std::vector<int> &pend){
    size_t size = pend.size();
    std::vector<int> IndexSeq;
    std::vector<int>JacobhallSeq = GetJacobhallSeq(size + 1);
    bool lastIsJacobhall = false;
    for(size_t i = 0; i < size + 1; i++){
        if(lastIsJacobhall == false){
            IndexSeq.push_back(JacobhallSeq[0]);
            JacobhallSeq.erase(JacobhallSeq.begin());
            lastIsJacobhall = true;
            
        }
        else{
            if(std::find(IndexSeq.begin(),IndexSeq.end(),i) != IndexSeq.end())
                i++;
            IndexSeq.push_back(i);
            lastIsJacobhall = false;
        }

    }
    return IndexSeq;
}
int BinarySearch(std::vector<int> &v, int value){
    int left = 0;
    int right = v.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(v[mid] == value)
            return mid;
        if(v[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}
void PmergeMe :: sortVector() {
    std::cout << "Before : ";
    for(size_t i = 0; i < this->unsVector.size(); i++){
        std::cout <<this->unsVector[i] << " ";
    }
    std::cout << std::endl;
    unsigned long time1 = clock();
    std::vector<int> v = this->unsVector;
    if(isSorted(this->unsVector) == true)
    {
        for(size_t i = 0; i < this->unsVector.size(); i++){
            this->soredVector.push_back(this->unsVector[i]);
        }
        return;
    }
    int struggler = -1;
    if(this->unsVector.size() % 2 != 0)
    {
        struggler = this->unsVector.back();
        this->unsVector.pop_back();
        
    }
    std::cout<< struggler << std::endl;
    std::vector<std::pair<int, int> > pairs = splitVecor(this->unsVector);
    for(size_t i = 0; i < pairs.size(); i++){
        if(pairs[i].first < pairs[i].second)
            std::swap(pairs[i].first, pairs[i].second);
    }
    MergeSortPairs(pairs);
    std::vector<int> pend;
    for(size_t i = 0; i < pairs.size(); i++){
        this->soredVector.push_back(pairs[i].first);
        pend.push_back(pairs[i].second);
    }
    std::vector<int>IndexSeq=GetIndexSeq(pend);
    for(size_t i = 0; i < IndexSeq.size(); i++){
        int InsertNum = pend[IndexSeq[i] - 1];
        int InsertIndex = BinarySearch(this->soredVector, InsertNum);
        this->soredVector.insert(this->soredVector.begin() + InsertIndex, InsertNum);

    }
    if(struggler != -1){
        int InsertIndex = BinarySearch(this->soredVector, struggler);
        this->soredVector.insert(this->soredVector.begin() + InsertIndex, struggler);
    }
    unsigned long time2 = clock();
    std::cout << "After : ";
    for(size_t i = 0; i < this->soredVector.size(); i++){
        std::cout <<this->soredVector[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Time : " << time2 - time1 << std::endl;
}

// void PmergeMe :: sortDeque() {
//     std::deque<int> d = this->unsdDeque;
//     for(size_t i = 0; i < this->unsdDeque.size(); i++){
//         std::cout << this->unsdDeque[i] << " ";
//     }
//     std::cout << std::endl;
//     unsigned long time1 = clock();
//     std::cout <<time1 << std::endl;
// }