#include<iostream>
using namespace std;

// up    => 0
// front => 1
// down  => 2
// back  => 3
// left  => 4
// right => 5


char front[3][3],back[3][3],up[3][3],down[3][3],leftside[3][3],rightside[3][3];
char front2[3][3],back2[3][3],up2[3][3],down2[3][3],leftside2[3][3],rightside2[3][3];
char cube[6][3][3];
char cube2[6][3][3];
void input(){
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>up[i][j];
    //         up2[i][j]=up[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>front[i][j];
    //         front2[i][j]=front[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>down[i][j];
    //         down2[i][j]=down[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>back[i][j];
    //         back2[i][j]=back[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>leftside[i][j];
    //         leftside2[i][j]=leftside[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>rightside[i][j];
    //         rightside2[i][j]=rightside2[i][j];
    //     }
    // }

// wwwwwwwwwgggggggggyyyyyyyyybbbbbbbbbooooooooorrrrrrrrr

// w w w w w w w w w
// g g g g g g g g g
// y y y y y y y y y
// b b b b b b b b b
// o o o o o o o o o
// r r r r r r r r r


// char cube[6][3][3];
for(int x=0;x<6;x++){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>cube[x][i][j];
            cube2[x][i][j]=cube[x][i][j];
        }
    }
}

}
void output(){
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<up[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<front[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<down[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<back[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<leftside[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<rightside[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int x=0;x<6;x++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<cube[x][i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

//to optimize use string array to store up down front and use and reverce for clock and counter
void left_clockwise(){
    cout<<"Left_clockwise"<<endl;
    // string str[6];
    
    // str[0]="up";
    // str[1]="front";
    // str[2]="down";
    // str[3]="back";

    // str[] = ["up","front","left","right"];
    char temp[3];
    temp[0]=cube[0][0][2]; 
    temp[1]=cube[0][1][2];
    temp[2]=cube[0][2][2];

    for(int x=0;x<4;x++){
        for(int i=0;i<3;i++){
            // temp[i]=cube[0][i][2];
            cube[x][i][2]=cube[x+1][i][2];  
            // cube[3][i][2]=temp[i];      
        }
    }

    // cube[0][0][2]=cube[1][0][2];  //up
    // cube[0][1][2]=cube[1][1][2];
    // cube[0][2][2]=cube[1][2][2];

    // cube[1][0][2]=cube[2][0][2];  //front
    // cube[1][1][2]=cube[2][1][2];
    // cube[1][2][2]=cube[2][2][2];

    // cube[2][0][2]=cube[3][0][2];  //down
    // cube[2][1][2]=cube[3][1][2];
    // cube[2][2][2]=cube[3][2][2];

    cube[3][0][2]=temp[0];  //back
    cube[3][1][2]=temp[1];
    cube[3][2][2]=temp[2];

    //left
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cube[4][i][j]=cube2[4][2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cube2[4][i][j]=cube[4][i][j];
        }
    }
}
void left_counter_clockwise(){
    
    cout<<"Left_counter_clockwise"<<endl;
    char temp[3];
    temp[0]=up[0][2];
    temp[1]=up[1][2];
    temp[2]=up[2][2];

    up[0][2]=back[0][2];
    up[1][2]=back[1][2];
    up[2][2]=back[2][2];

    back[0][2]=down[0][2];
    back[1][2]=down[1][2];
    back[2][2]=down[2][2];

    down[0][2]=front[0][2];
    down[1][2]=front[1][2];
    down[2][2]=front[2][2];

    front[0][2]=temp[0];
    front[1][2]=temp[1];
    front[2][2]=temp[2];  

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            leftside[i][j]=leftside2[j][2-i];
        }
    } 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            leftside2[i][j]=leftside[i][j];
        }
    }  
}
int main(){
    
    input();
    output();
    /***************** */
    left_clockwise();
    output();
    // left_counter_clockwise();
    // output();

}