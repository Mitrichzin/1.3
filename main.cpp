#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    setlocale(LC_ALL,"RUS");
    string s1,s2;
    map <string,string> voc1,voc2;
    freopen("input.txt", "r",stdin);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> s1 >> s2;
        voc1.insert(pair <string,string> (s1,s2));
        voc2.insert(pair <string,string> (s2,s1));
    }
    cout<<"Программа ищет в словаре пару введенному в файле слову"<<endl;
    cin >> s1;
    if (voc1.count(s1))
        cout<<voc1[s1];
        else
            cout<<voc2[s1];
}
