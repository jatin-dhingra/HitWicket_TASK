
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;
int n=5;
bool gameover=false;
vector<vector<string>>v;
class board
{
public:
    int n=5;
    int p1[5],p2[5];
    void createboard()
    {

        for(int i{};i<n;i++)
        {
            vector<string>vec;
            for(int j{};j<n;j++)
            {
                vec.push_back("---");
            }
            v.push_back(vec);
        }
    }
    void input1()
    {
      cout<<"Player 1 Input: ";
      for(int i{};i<n;i++){
        cin>>p1[i];
      }
      cout<<endl;
    }
    void input2()
    {
      cout<<"Player 2 Input: ";
      for(int i{};i<n;i++){
        cin>>p2[i];
      }
      cout<<endl;
    }
    void display()
    {
        int n=5;
        for(int i{};i<n;i++)
        {

            for(int j{};j<n;j++)
            {
                cout<<v[i][j]<<"    ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    void newgridp1()
    {
      for(int i{};i<n;i++)
      {
          v[4][i]="A-P"+to_string(p1[i]);
      }
    }
    void newgridp2()
    {
      for(int i{};i<n;i++)
      {
          v[0][i]="B-P"+to_string(p2[i]);
      }
    }
};
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    board bj;
    bj.createboard();
    bj.display();

    bj.input1();
    bj.newgridp1();
    bj.display();

    bj.input2();
    bj.newgridp2();
    bj.display();

    while(!gameover)
    {
        
    }

}
