#include<iostream>
#include<vector>
using namespace std;

class Problem{
    private:
    int row, col;
    vector<vector<int>> data;   

    public:
        void display(){
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    cout<<data[i][j]<<" ";
                }
                cout<<endl;
            }
        }     

        void input(){
            cout<<"enter the size of grid(row, col): ";
            cin>>row>>col;

            row++; col++;

            cout<<"enter data: ";
            for(int i=0; i<(row-1); i++){
                for(int j=0; j<col-1; j++){
                    cout<<"x["<<i<<", "<<j<<"]: "<<" ";
                    cin>>data[i][j];
                }
                cout<<endl;
            }
            cout<<"enter supply: ";
            for(int i=0; i<(row-1); i++){
                cout<<i<<". : ";
                cin>>data[i][col-1];
            }

            cout<<"Enter Demand: ";
            for(int i=0; i<(col-1); i++){
                cout<<i<<". : ";
                cin>>data[row-1][i];
            }
        }
};

main(){
    Problem one; 
    one.input();
    one.display();
}