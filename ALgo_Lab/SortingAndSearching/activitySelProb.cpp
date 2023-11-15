#include <bits/stdc++.h>

using namespace std;

struct TimeRange {
    int start;
    int finish;
};

void bsort(struct TimeRange table[], int cases) {
    for (int i = 0; i < cases; i++) {
        for (int j = 0; j < cases - 1 - i; j++) {
            if (table[j].finish > table[j + 1].finish) {
                
                int temp= table[j].finish;
                table[j].finish= table[j+1].finish;
                table[j+1].finish=temp;

                temp= table[j].start;
                table[j].start= table[j+1].start;
                table[j+1].start=temp;

                //Alternative 
                // swap(table[j], table[j + 1]);
            }
        }
    }
}

void selection(struct TimeRange table[], int cases) {
    int cmp = table[0].finish;
    cout<<"Calculating and showing the non-conflict time ranges"<<endl;
    cout<<table[0].start << " "<< table[0].finish<<endl;
    for(int i=0; i<cases; i++){
        if (table[i].start >= cmp) {
            cout << table[i].start<< " ";
            cout << table[i].finish << endl;
            cmp = table[i].finish;
        }
    }
}

int main() {
    int cases;
    cin >> cases;
    struct TimeRange table[cases];

    for (int i = 0; i < cases; i++) {
        cin >> table[i].start;
        cin >> table[i].finish;
    }

    bsort(table, cases);
    selection(table, cases);



    return 0;
}
