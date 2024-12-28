#include <iostream>
#include <algorithm>
using namespace std;

struct Class {
    int class_num;
    int total_penalty;
};

int main() {
    iso::sync_with_stdio(0);
    cin.tie(0);
    freopen("T1.in", "r", stdin);
    freopen("T1.out", "w", stdout);
    
    int n;
    cin >> n;
    
    int penalty[7] = {0, 15, 15, 1, 5, 3, 2}; // penalty[违规编号] = 扣分值
    
    const int total_classes = 23;
    Class classes[total_classes];
    for(int i = 0; i < total_classes; i++) {
        classes[i].class_num = i + 1;
        classes[i].total_penalty = 0;
    }
    
    for(int i = 0; i < n; i++) {
        int m, c;
        cin >>c>> m;
        if(m >= 1 && m <= 23 && c >= 1 && c <= 6) {
            classes[m - 1].total_penalty += penalty[c];
        }
    }
    
    // 排序规则：总扣分从高到低，若相同则班级号从小到大
    sort(classes, classes + total_classes, [](const Class &a, const Class &b) {
        if(a.total_penalty != b.total_penalty)
            return a.total_penalty > b.total_penalty;
        else
            return a.class_num < b.class_num;
    });
    
    // 输出排名、班级号和总扣分
    for(int i = 0; i < total_classes; i++) {
        cout << i + 1 << " " << classes[i].class_num << " " << classes[i].total_penalty << endl;
    }
    
    return 0;
}
