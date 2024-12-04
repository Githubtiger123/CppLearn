//
// Created by Tiger on 2024/4/20.
//

#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

void print_deque(const deque<int> &d) {

    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {

        std::cout << *it << " ";
    }
    std::cout << "" << std::endl;
}

/*
 * 要记住的重要一点是，std::sort 进行排序时会对元素进行多次复制或移动，
 * 因此如果 std::deque 中的元素非常多，
 * 或者元素的移动开销较大时，排序可能会比较耗时。
 * 在这种情况下，你可能想要考虑先将
 * std::deque 的内容复制到 std::vector 中，
 * 对 vector 进行排序，然后再复制回 deque，
 * 或者考虑是否有更合适的容器或排序算法可以使用。
 */
int main() {

    deque<int> d;
    d.push_back(5);
    d.push_back(23);
    d.push_back(-7);
    d.push_back(46);
    d.push_back(70);

    print_deque(d);

    sort(d.begin(), d.end());
    print_deque(d);

    //从大到小排序
    sort(d.begin(), d.end(), greater<int>());


    return 0;
}

