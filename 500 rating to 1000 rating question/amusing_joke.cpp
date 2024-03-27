Skip to content
imawadh
/
Code-Force-Problem

Type / to search

Code
Issues
Pull requests
Actions
Projects
Security
Insights
Commit
Day 3 of Solving 10 Problems a day
 main
@imawadh
imawadh committed 3 days ago 
1 parent b880c83
commit 935189f
 
Showing 30 changed files with 449 additions and 0 deletions.
Filter changed files
 40 changes: 40 additions & 0 deletions40  
800 Level/arrival_of_the_general.cpp
@@ -0,0 +1,40 @@
# include <bits/stdc++.h>

using namespace std;
// Solved
int main()
{
    int a;
    cin>>a;
    vector <int> arr(a);
    int min = 1000, max = 0;
    int max_index = 0;
    int min_index = 0;

    for(int j = 0; j<a; j++)
    {
        cin>>arr[j];
        if(min>=arr[j])
        {
            min = arr[j];
            min_index=j;
        }
        if(max<arr[j])
        {
            max = arr[j];
            max_index=j;
        }





    }
    if(max_index<min_index)
    {
        cout<<max_index+arr.size()-min_index-1;
    }
    else{
        cout<<max_index+arr.size()-min_index-2;
    }
}
 Binary file addedBIN +147 KB 
800 Level/arrival_of_the_general.exe
Binary file not shown.
 14 changes: 14 additions & 0 deletions14  
800 Level/borze.py
@@ -0,0 +1,14 @@
str = input()
i = 0
# solved
while(i<len(str)):
    if(str[i]=='-' and str[i+1]=='-'):
        i+=2
        print(2,end='')
    elif(str[i]=='-' and str[i+1]=='.'):
        i+=2
        print(1,end='')
    else:
        i+=1
        print(0,end='')

 Binary file addedBIN +134 KB 
800 Level/calculating_function.exe
Binary file not shown.
 7 changes: 7 additions & 0 deletions7  
800 Level/calculating_function.py
@@ -0,0 +1,7 @@
#Solved

a = int(input())
if(a%2==0):
    print(int(a/2))
else:
    print(-(a+1)//2)
 22 changes: 22 additions & 0 deletions22  
800 Level/divisibility_problem.cpp
@@ -0,0 +1,22 @@
# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<b-(a%b)<<'\n';
        }
        t--;
    }
}
 Binary file addedBIN +134 KB 
800 Level/divisibility_problem.exe
Binary file not shown.
 8 changes: 8 additions & 0 deletions8  
800 Level/drinks.py
@@ -0,0 +1,8 @@
#not solved
a = int(input())
sum = 0
for i in range(a):
    b = int(input())
    sum+=b
    if(i==a-1):
        print((a/100)*b)
 13 changes: 13 additions & 0 deletions13  
800 Level/hulk.py
@@ -0,0 +1,13 @@
# solved
num = int(input())
number = 1
str = 'I hate '
while(number!=num):

    if(number%2==1):
        str+='that I love '
    else:
        str+='that I hate '
    number+=1

print(str+'it')
 32 changes: 32 additions & 0 deletions32  
800 Level/i_wanna_be_the_guy.cpp
@@ -0,0 +1,32 @@
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    set <int> my_set;
    for(int i = 0; i<b ;i++)
    {
        int d;
        cin>>d;
        my_set.insert(d);

    }   
    int c;
    cin>>c;
    for(int i = 0; i<c ;i++)
    {
        int d;
        cin>>d;
        my_set.insert(d);
    }   
    if(my_set.size()==a)
    {
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}
 Binary file addedBIN +164 KB 
800 Level/i_wanna_be_the_guy.exe
Binary file not shown.
 31 changes: 31 additions & 0 deletions31  
800 Level/insomnia_cure.cpp
@@ -0,0 +1,31 @@
#include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int i = 1;
    set <int> my_set;
    while(i*k<=d){
        my_set.insert(i*k);
        i++;
    }   
    i = 1;
    while(i*l<=d){
        my_set.insert(i*l);
        i++;
    }  
    i = 1;
    while(i*m<=d){
        my_set.insert(i*m);
        i++;
    } 
    i = 1;
    while(i*n<=d){
        my_set.insert(i*n);
        i++;
    } 
    cout<<my_set.size();

}
 Binary file addedBIN +164 KB 
800 Level/insomnia_cure.exe
Binary file not shown.
 14 changes: 14 additions & 0 deletions14  
800 Level/is_your_horseshoe_on_the_other_hoof.cpp
@@ -0,0 +1,14 @@
# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    set <int> shoes;
    for(int i =0 ; i<4; i++)
    {
        int a;
        cin>>a;
        shoes.insert(a);
    }
    cout<<4-shoes.size();
}
 Binary file addedBIN +163 KB 
800 Level/is_your_horseshoe_on_the_other_hoof.exe
Binary file not shown.
 25 changes: 25 additions & 0 deletions25  
800 Level/magnet.cpp
@@ -0,0 +1,25 @@
# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int c;
    cin>>c;
    string str1;
    char a, b;
    int count =1;
    for(int i =0 ; i<c ; i++)
    {
        b = str1[0];
        cin>>str1;
        a = str1[1];
        if(a==b)
        {
            count++;
        }


    }
    cout<<count;

}
 Binary file addedBIN +136 KB 
800 Level/magnet.exe
Binary file not shown.
 21 changes: 21 additions & 0 deletions21  
800 Level/pangram.cpp
@@ -0,0 +1,21 @@
# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a;
    cin>>a;
    string str;
    cin>>str;
    set <char> my_set;
    for(int i= 0;i<str.size();i++)
    {
        char str1 = tolower(char(str[i]));
        my_set.insert(str1);
    }
    if(my_set.size()==26)
    {
    cout<<"YES\n";
    }
    else cout<<"NO\n";
}
 Binary file addedBIN +166 KB 
800 Level/pangram.exe
Binary file not shown.
 40 changes: 40 additions & 0 deletions40  
800 Level/rudolf_and_the_ticket.cpp
@@ -0,0 +1,40 @@
# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int z;
    cin>>z;
    for(int y= 0; y<z ; y++)
    {
    int n,m,k;
    cin>>n>>m>>k;
    vector <int> left(n);
    vector <int> right(m);
    for(int i = 0 ; i<n ;i++)
    {

        cin>>left[i];

    }
    for(int i = 0 ; i<m ;i++)
    {

        cin>>right[i];

    }
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j =0 ; j<m; j++)
        {

            if(left[i] + right[j]<=k)
            {
                count++;
            }
        }
    }
    cout<<count<<'\n';
    }
}
 Binary file addedBIN +148 KB 
800 Level/rudolf_and_the_ticket.exe
Binary file not shown.
 35 changes: 35 additions & 0 deletions35  
800 Level/suffle_party.cpp
@@ -0,0 +1,35 @@
# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int b;
        cin>>b;
        // Solved

        /*
        suppose kare 1 pe tha 2 pe jayega 
        2 pe tha 4 pe ja sakta hai 
        4 ke baad 8 pe jayega
        8 ke baad 16 pe hi jayega 
        yani ki 2 to the power n tak jayega lekin n ka pata nhi aur wo 2 to the power n+1 pe bada ho jayega  
        */
       int value = 2;
       while(value <=b)
       {
         value*=2;
       }
       cout<<value/2<<'\n';






    }
}
 Binary file addedBIN +133 KB 
800 Level/suffle_party.exe
Binary file not shown.
 Empty file added0  
800 Level/ultra_fast_mathematician.cpp
Empty file.
 Binary file addedBIN +134 KB 
800 Level/ultra_fast_mathematician.exe
Binary file not shown.
 18 changes: 18 additions & 0 deletions18  
TLE Eliminator/Level 800/.vscode/c_cpp_properties.json
@@ -0,0 +1,18 @@
{
  "configurations": [
    {
      "name": "windows-gcc-x64",
      "includePath": [
        "${workspaceFolder}/**"
      ],
      "compilerPath": "C:/msys64/ucrt64/bin/gcc.exe",
      "cStandard": "${default}",
      "cppStandard": "${default}",
      "intelliSenseMode": "windows-gcc-x64",
      "compilerArgs": [
        ""
      ]
    }
  ],
  "version": 4
}
 24 changes: 24 additions & 0 deletions24  
TLE Eliminator/Level 800/.vscode/launch.json
@@ -0,0 +1,24 @@
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "C/C++ Runner: Debug Session",
      "type": "cppdbg",
      "request": "launch",
      "args": [],
      "stopAtEntry": false,
      "externalConsole": true,
      "cwd": "d:/Desktop/Nothing/Code_Forces/TLE Eliminator/Level 800",
      "program": "d:/Desktop/Nothing/Code_Forces/TLE Eliminator/Level 800/build/Debug/outDebug",
      "MIMode": "gdb",
      "miDebuggerPath": "gdb",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ]
    }
  ]
}
 59 changes: 59 additions & 0 deletions59  
TLE Eliminator/Level 800/.vscode/settings.json
@@ -0,0 +1,59 @@
{
  "C_Cpp_Runner.cCompilerPath": "gcc",
  "C_Cpp_Runner.cppCompilerPath": "g++",
  "C_Cpp_Runner.debuggerPath": "gdb",
  "C_Cpp_Runner.cStandard": "",
  "C_Cpp_Runner.cppStandard": "",
  "C_Cpp_Runner.msvcBatchPath": "",
  "C_Cpp_Runner.useMsvc": false,
  "C_Cpp_Runner.warnings": [
    "-Wall",
    "-Wextra",
    "-Wpedantic",
    "-Wshadow",
    "-Wformat=2",
    "-Wcast-align",
    "-Wconversion",
    "-Wsign-conversion",
    "-Wnull-dereference"
  ],
  "C_Cpp_Runner.msvcWarnings": [
    "/W4",
    "/permissive-",
    "/w14242",
    "/w14287",
    "/w14296",
    "/w14311",
    "/w14826",
    "/w44062",
    "/w44242",
    "/w14905",
    "/w14906",
    "/w14263",
    "/w44265",
    "/w14928"
  ],
  "C_Cpp_Runner.enableWarnings": true,
  "C_Cpp_Runner.warningsAsError": false,
  "C_Cpp_Runner.compilerArgs": [],
  "C_Cpp_Runner.linkerArgs": [],
  "C_Cpp_Runner.includePaths": [],
  "C_Cpp_Runner.includeSearch": [
    "*",
    "**/*"
  ],
  "C_Cpp_Runner.excludeSearch": [
    "**/build",
    "**/build/**",
    "**/.*",
    "**/.*/**",
    "**/.vscode",
    "**/.vscode/**"
  ],
  "C_Cpp_Runner.useAddressSanitizer": false,
  "C_Cpp_Runner.useUndefinedSanitizer": false,
  "C_Cpp_Runner.useLeakSanitizer": false,
  "C_Cpp_Runner.showCompilationTime": false,
  "C_Cpp_Runner.useLinkTimeOptimization": false,
  "C_Cpp_Runner.msvcSecureNoWarnings": false
}
 46 changes: 46 additions & 0 deletions46  
TLE Eliminator/Level 800/halloumi_boxes.cpp
@@ -0,0 +1,46 @@
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        vector <int> arr(n);
        // Taking n inputs in the vector

        for(int j =0 ; j<n ; j++)
        {
            cin>>arr[j];
        }
        int flag = 1;
        // Check 1 -- whether it is present in ascending or not ? 
        for(int j =1 ; j<n ; j++)
        {
            if(arr[j]>=arr[j-1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            cout<<"NO\n";
        }
        // Breaking into sub - array form 



    }
}
 
