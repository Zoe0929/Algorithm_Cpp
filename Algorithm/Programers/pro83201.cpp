#include <string>
#include <vector>
#include<algorithm>
#include<iostream>


using namespace std;

string solution(vector<vector<int>> scores) {
    string answer = "";
    int max=0, min = 0;
    int sum = 0;
    int student;
    for (int i = 0; i < scores[0].size(); i++) {
        max = scores[0][i], min =scores[0][i] , sum = 0;
        student = scores.size();
        int selfscore = scores[i][i];
        bool frag = true;
        for (int j = 0; j < scores.size(); j++) {
            if (i != j && scores[j][i] == selfscore) frag = false;
            if (max < scores[j][i]) max = scores[j][i];
            if (min > scores[j][i]) min = scores[j][i];
            sum += scores[j][i];
        }       
            if (frag && (selfscore==max||selfscore==min)) {
                sum -= selfscore;
                student--;
            }
        if ((float)(sum / student) >= 90)
            answer += "A";
        else if ((float)(sum / student) >= 80)
            answer += "B";
        else if ((float)(sum / student) >= 70)
            answer += "C";
        else if ((float)(sum / student) >= 50)
            answer += "D";
        else
            answer += "F";
    }
    return answer;
}

int main() {
    solution({ {100, 90, 98, 88, 65},{50, 45, 99, 85, 77},{47, 88, 95, 80, 67},{61, 57, 100, 80, 65},{24, 90, 94, 75, 65} });
}