// #include<iostream>
// using namespace std;

// int charToInt(char x) {
//     if(x == 'I') return 1;
//     if(x == 'V') return 5;
//     if(x =='X') return 10;
//     if(x == 'L') return 50;
//     if(x == 'C') return 100;
//     if(x == 'D') return 500;
//     if(x == 'M') return 1000;
//     return 0;
// }

// class Solution {
// public:
//     int romanToInt(string s) {
//         int sum = 0;
//         int sSize = s.size();
//         for(int i = 0; i < sSize; i++) {
//             if(i+1 < sSize && charToInt(s[i]) < charToInt(s[i+1])) {
//                 sum += charToInt(s[i+1]) - charToInt(s[i]);
//                 i++;
//             } else {
//                 sum += charToInt(s[i]);
//             }
//         }
//         return sum;
//     }
// };



