#include <bits/stdc++.h>
using namespace std;
map<string, int> words(const string &s)
{
    stringstream ss(s);
    map<string, int> freq;
    string w;
    while (ss >> w)
    {
        freq[w]++;
    }
    return freq;
}

int calculatePoints( map<string, int> &freq1,  map<string, int> &freq2,  map<string, int> &freq3)
{
    int point = 0;
    for(const pair<string, int> p : freq1)
    {
        string w = p.first;
        int freq_in_s2 = freq2[w];
        int freq_in_s3 = freq3[w];

        if (freq_in_s2 > 0 && freq_in_s3 > 0)
        {
            continue;
        }
        else if (freq_in_s2 == 0 && freq_in_s3 == 0)
        {
            point = point +  3;

        }
        else
        {
            point = point + 1;
        }
    }
    return point;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1, s2, s3;
        getline(cin, s1);
        getline(cin, s2);
        getline(cin, s3);

        map<string, int> freq1 = words(s1);
        map<string, int> freq2 = words(s2);
        map<string, int> freq3 = words(s3);

        int p1 = calculatePoints(freq1, freq2, freq3);
        int p2 = calculatePoints(freq2, freq1, freq3);
        int p3 = calculatePoints(freq3, freq1, freq2);

        cout << p1 << " " << p2 << " " << p3 << '\n';
    }
    return 0;
}
