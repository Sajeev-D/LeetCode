// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// // class Solution {
// // public:
// //     bool isValid(string s) {
// //         int size = s.size();
// //         if(s[0] == ')' || s[0] == ']' || s[0] == '}'){
// //             return false;
// //         }

// //         for(int i=0; i<size; ){
// //             if(s[i] == '(' && s[i+1] == ')'){
// //                 i+=2;
// //                 continue;
// //             } else if(s[i] == '[' && s[i+1] == ']'){
// //                 i+=2;
// //                 continue;
// //             } else if(s[i] == '{' && s[i+1] == '}'){
// //                 i+=2;
// //                 continue;
// //             } else {
// //                 return false;
// //             }
// //         }
// //         return true;
// //     }
// // };

// // Above does not work for nested brackets. Use stack to solve this problem.

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
        
//         // Loop thorugh all characters in the string (expression:range)
//         for (char c : s) {

//             // Push openings into the stack
//             if (c == '(' || c == '[' || c == '{') {
//                 st.push(c);
//             } 
            
//             // .top returns the latest element in the stack
//             // .pop returs the latest element in the stack and removes it
//             else {
//                 if (st.empty()) return false;
                
//                 if (c == ')' && st.top() != '(') return false;
//                 if (c == ']' && st.top() != '[') return false;
//                 if (c == '}' && st.top() != '{') return false;
                
//                 st.pop();
//             }
//         }
        
//         return st.empty();
//     }
// };

// int main(){
//     string s = "{[]}";
//     Solution s1;
//     cout << s1.isValid(s) << endl;
//     return 0;
// }