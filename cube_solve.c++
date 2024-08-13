#include<iostream>
#include <windows.h>
using namespace std;

// up    => 0
// front => 1
// down  => 2
// back  => 3
// left  => 4
// right => 5


// 00u 01u 02u 10u 11u 12u 20u 21u 22u
// 00f 01f 02f 10f 11f 12f 20f 21f 22f 
// 00d 01d 02d 10d 11d 12d 20d 21d 22d
// 00b 01d 02d 10d 11d 12d 20d 21d 22d
// 00l 01l 02l 10l 11l 12l 20l 21l 22l  
// 00r 01r 02r 10r 11r 12r 20r 21r 22r  
 const string RESET = "\033[0m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string ORANGE = "\033[38;5;208m"; // Approximate orange color
    const string WHITE = "\033[37m";

string front[3][3],back[3][3],up[3][3],down[3][3],leftside[3][3],rightside[3][3];
string front2[3][3],back2[3][3],up2[3][3],down2[3][3],leftside2[3][3],rightside2[3][3];
// char cube[6][3][3];
// char cube2[6][3][3];
void input(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>up[i][j];
            up2[i][j]=up[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>front[i][j];
            front2[i][j]=front[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>down[i][j];
            down2[i][j]=down[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>back[i][j];
            back2[i][j]=back[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>leftside[i][j];
            leftside2[i][j]=leftside[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>rightside[i][j];
            rightside2[i][j]=rightside[i][j];
        }
    }


// w w w w w w w w w
// g g g g g g g g g
// y y y y y y y y y
// b b b b b b b b b
// o o o o o o o o o
// r r r r r r r r r


// char cube[6][3][3];
// for(int x=0;x<6;x++){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>cube[x][i][j];
//             cube2[x][i][j]=cube[x][i][j];
//         }
//     }
// }
// for(int x=0;x<6;x++){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>cube[x][i][j];
//             cube2[x][i][j]=cube[x][i][j];
//         }
//     }
// }

}
void output(){
    for(int i=0;i<3;i++){
        cout<<"                ";
        for(int j=0;j<3;j++){
            if(up[i][j][0]=='U')
                cout<<WHITE;
            if(up[i][j][0]=='F')
                cout<<GREEN;
            if(up[i][j][0]=='D')
                cout<<YELLOW;
            if(up[i][j][0]=='B')
                cout<<BLUE;
            if(up[i][j][0]=='L')
                cout<<ORANGE;
            if(up[i][j][0]=='R')
                cout<<RED;

                cout<<up[i][j]<<RESET<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // Handling 'left' direction
            if (leftside[i][j][0] == 'U')
                cout << WHITE;
            if (leftside[i][j][0] == 'F')
                cout << GREEN;
            if (leftside[i][j][0] == 'D')
                cout << YELLOW;
            if (leftside[i][j][0] == 'B')
                cout << BLUE;
            if (leftside[i][j][0] == 'L')
                cout << ORANGE;
            if (leftside[i][j][0] == 'R')
                cout << RED;

            cout<<leftside[i][j]<<RESET<<" ";
        }
        cout<<" ";
        for(int j=0;j<3;j++){
            // Handling 'front' direction
            if (front[i][j][0] == 'U')
                cout << WHITE;
            if (front[i][j][0] == 'F')
                cout << GREEN;
            if (front[i][j][0] == 'D')
                cout << YELLOW;
            if (front[i][j][0] == 'B')
                cout << BLUE;
            if (front[i][j][0] == 'L')
                cout << ORANGE;
            if (front[i][j][0] == 'R')
                cout << RED;

            cout<<front[i][j]<<RESET<<" ";
        }
        cout<<" ";
        for(int j=0;j<3;j++){
            // Handling 'right' direction
            if (rightside[i][j][0] == 'U')
                cout << WHITE;
            if (rightside[i][j][0] == 'F')
                cout << GREEN;
            if (rightside[i][j][0] == 'D')
                cout << YELLOW;
            if (rightside[i][j][0] == 'B')
                cout << BLUE;
            if (rightside[i][j][0] == 'L')
                cout << ORANGE;
            if (rightside[i][j][0] == 'R')
                cout << RED;

            cout<<rightside[i][j]<<RESET<<" ";
        }
        cout<<" ";
        for(int j=0;j<3;j++){
            // Handling 'back' direction
            if (back[2-i][2-j][0] == 'U')
                cout << WHITE;
            if (back[2-i][2-j][0] == 'F')
                cout << GREEN;
            if (back[2-i][2-j][0] == 'D')
                cout << YELLOW;
            if (back[2-i][2-j][0] == 'B')
                cout << BLUE;
            if (back[2-i][2-j][0] == 'L')
                cout << ORANGE;
            if (back[2-i][2-j][0] == 'R')
                cout << RED;

            cout<<back[2-i][2-j]<<RESET<<" ";
        }
        
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"                ";
        for(int j=0;j<3;j++){
            // Handling 'down' direction
            if (down[i][j][0] == 'U')
                cout << WHITE;
            if (down[i][j][0] == 'F')
                cout << GREEN;
            if (down[i][j][0] == 'D')
                cout << YELLOW;
            if (down[i][j][0] == 'B')
                cout << BLUE;
            if (down[i][j][0] == 'L')
                cout << ORANGE;
            if (down[i][j][0] == 'R')
                cout << RED;
            cout<<down[i][j]<<RESET<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<"                ";
        for(int j=0;j<3;j++){
            // Handling 'back' direction
            if (back[i][j][0] == 'U')
                cout << WHITE;
            if (back[i][j][0] == 'F')
                cout << GREEN;
            if (back[i][j][0] == 'D')
                cout << YELLOW;
            if (back[i][j][0] == 'B')
                cout << BLUE;
            if (back[i][j][0] == 'L')
                cout << ORANGE;
            if (back[i][j][0] == 'R')
                cout << RED;

            cout<<back[i][j]<<RESET<<" ";
        }
        cout<<endl;
    }
    
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
    
}
//to optimize use string array to store up down front and use and reverce for clock and counter
void left_clockwise(){
    cout<<"Left_clockwise"<<endl;
    
    char temp[3];

    for(int i=0;i<3;i++){
        up[i][0]=back2[i][0];        
        back[i][0]=down2[i][0];
        down[i][0]=front2[i][0];
        front[i][0]=up2[i][0];
    }
    for(int i=0;i<3;i++){
        up2[i][0]=up[i][0];        
        back2[i][0]=back[i][0];
        down2[i][0]=down[i][0];
        front2[i][0]=front[i][0];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            leftside[i][j]=leftside2[2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            leftside2[i][j]=leftside[i][j];
        }
    }
}
void left_counter_clockwise(){
    
    cout<<"Left_counter_clockwise"<<endl;
    char temp[3];
    
    for(int i=0;i<3;i++){
        up[i][0]=front2[i][0];        
        front[i][0]=down2[i][0];
        down[i][0]=back2[i][0];
        back[i][0]=up2[i][0];
    }
    for(int i=0;i<3;i++){
        up2[i][0]=up[i][0];        
        front2[i][0]=front[i][0];
        down2[i][0]=down[i][0];
        back2[i][0]=back[i][0];
    }

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
void right_clockwise(){
    cout<<"Right_clockwise"<<endl;
    
    char temp[3];

    for(int i=0;i<3;i++){
        up[i][2]=front2[i][2];        
        front[i][2]=down2[i][2];
        down[i][2]=back2[i][2];
        back[i][2]=up2[i][2];
    }
    for(int i=0;i<3;i++){
        up2[i][2]=up[i][2];        
        front2[i][2]=front[i][2];
        down2[i][2]=down[i][2];
        back2[i][2]=back[i][2];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            rightside[i][j]=rightside2[2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            rightside2[i][j]=rightside[i][j];
        }
    }
}
void right_counter_clockwise(){
    
    cout<<"Right_counter_clockwise"<<endl;
    char temp[3];
    for(int i=0;i<3;i++){
        up[i][2]=back2[i][2];        
        back[i][2]=down2[i][2];
        down[i][2]=front2[i][2];
        front[i][2]=up2[i][2];
    }
    for(int i=0;i<3;i++){
        up2[i][2]=up[i][2];        
        back2[i][2]=back[i][2];
        down2[i][2]=down[i][2];
        front2[i][2]=front[i][2];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            rightside[i][j]=rightside2[j][2-i];
        }
    } 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            rightside2[i][j]=rightside[i][j];
        }
    }  
}

void front_clockwise(){
    cout<<"Front_clockwise"<<endl;
    
    char temp[3];

    for(int i=0;i<3;i++){
        up[2][i]=leftside2[2-i][2];    //reverse to match order up     
        leftside[i][2]=down2[0][i];  //reverse to match order down 
        down[0][i]=rightside2[2-i][0];
        rightside[i][0]=up2[2][i];
    }
    
    for(int i=0;i<3;i++){
        up2[2][i]=up[2][i];    //reverse to match order up     
        leftside2[i][2]=leftside[i][2];  //reverse to match order down 
        down2[0][i]=down[0][i];
        rightside2[i][0]=rightside[i][0];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            front[i][j]=front2[2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            front2[i][j]=front[i][j];
        }
    }
}
void front_counter_clockwise(){
    
    cout<<"Front_counter_clockwise"<<endl;
    char temp[3];
    for(int i=0;i<3;i++){
        up[2][i]=rightside2[i][0];        
        rightside[i][0]=down2[0][2-i];
        down[0][i]=leftside2[i][2];
        leftside[i][2]=up2[2][2-i];
    }
    for(int i=0;i<3;i++){
        up2[2][i]=up[2][i];        
        rightside2[i][0]=rightside[i][0];
        down2[0][i]=down[0][i];
        leftside2[i][2]=leftside[i][2];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            front[i][j]=front2[j][2-i];
        }
    } 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            front2[i][j]=front[i][j];
        }
    }  
}
void back_clockwise(){
    cout<<"Back_clockwise"<<endl;
    
    char temp[3];


    for(int i=0;i<3;i++){
        up[0][i]=rightside2[i][2];        
        rightside[i][2]=down2[2][2-i];
        down[2][i]=leftside2[i][0];
        leftside[i][0]=up2[0][2-i];
    }
    for(int i=0;i<3;i++){
        up2[0][i]=up[0][i];        
        rightside2[i][2]=rightside[i][2];
        down2[2][i]=down[2][i];
        leftside2[i][0]=leftside[i][0];
    }

    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            back[i][j]=back2[2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            back2[i][j]=back[i][j];
        }
    }
}
void back_counter_clockwise(){
    
    cout<<"Back_counter_clockwise"<<endl;
    char temp[3];
    
    for(int i=0;i<3;i++){
        up[0][i]=leftside2[2-i][0];    //reverse to match order up     
        leftside[i][0]=down2[2][i];  //reverse to match order down 
        down[2][i]=rightside2[2-i][2];
        rightside[i][2]=up2[0][i];
    }
    
    for(int i=0;i<3;i++){
        up2[0][i]=up[0][i];    //reverse to match order up     
        leftside2[i][0]=leftside[i][0];  //reverse to match order down 
        down2[2][i]=down[2][i];
        rightside2[i][2]=rightside[i][2];
    }
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            back[i][j]=back2[j][2-i];
        }
    } 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            back2[i][j]=back[i][j];
        }
    }  
}

void up_clockwise(){
    cout<<"Up_clockwise"<<endl;
    // f l b r
    char temp[3];

    for(int i=0;i<3;i++){      
        front[0][i]=rightside2[0][i];
        leftside[0][i]=front2[0][i];
        back[2][2-i]=leftside2[0][i];  
        rightside[0][i]=back2[2][2-i];
    }
    for(int i=0;i<3;i++){
        front2[0][i]=front[0][i];        
        leftside2[0][i]=leftside[0][i];
        back2[2][2-i]=back[2][2-i];
        rightside2[0][i]=rightside[0][i];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            up[i][j]=up2[2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            up2[i][j]=up[i][j];
        }
    }
}


void up_counter_clockwise(){
    cout<<"Up_counter_clockwise"<<endl;
    // f l b r
    char temp[3];

    for(int i=0;i<3;i++){      
        front[0][i]=leftside2[0][i];
        leftside[0][i]=back2[2][2-i];
        back[2][2-i]=rightside2[0][i];  
        rightside[0][i]=front2[0][i];
    }
    for(int i=0;i<3;i++){
        front2[0][i]=front[0][i];        
        leftside2[0][i]=leftside[0][i];
        back2[2][2-i]=back[2][2-i];
        rightside2[0][i]=rightside[0][i];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            up[i][j]=up2[j][2-i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            up2[i][j]=up[i][j];
        }
    }
}

void down_clockwise(){
    cout<<"Down_clockwise"<<endl;
    // f l b r
    char temp[3];

    for(int i=0;i<3;i++){      
        front[2][i]=leftside2[2][i];
        leftside[2][i]=back2[0][2-i];
        back[0][2-i]=rightside2[2][i];  
        rightside[2][i]=front2[2][i];
    }
    for(int i=0;i<3;i++){
        front2[2][i]=front[2][i];        
        leftside2[2][i]=leftside[2][i];
        back2[0][2-i]=back[0][2-i];
        rightside2[2][i]=rightside[2][i];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            down[i][j]=down2[2-j][i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            down2[i][j]=down[i][j];
        }
    }
}

void down_counter_clockwise(){
    cout<<"Down_counter_clockwise"<<endl;
    // f l b r
    char temp[3];

    for(int i=0;i<3;i++){      
        front[2][i]=rightside2[2][i];
        leftside[2][i]=front2[2][i];
        back[0][2-i]=leftside2[2][i];  
        rightside[2][i]=back2[0][2-i];
    }
    for(int i=0;i<3;i++){
        front2[2][i]=front[2][i];        
        leftside2[2][i]=leftside[2][i];
        back2[0][2-i]=back[0][2-i];
        rightside2[2][i]=rightside[2][i];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            down[i][j]=down2[j][2-i];
        }
    }
    //same update
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            down2[i][j]=down[i][j];
        }
    }
}


int main(){
    
    input();
    output();
    int value;
    
    // while(cin>>value){

    //     switch (value)
    //     {
    //     case 1:
    //         right_clockwise();
    //         output();
    //         break;
    //     case 2:
    //         right_counter_clockwise();
    //         output();
    //         break;
    //     case 3:
    //         left_clockwise();
    //         output();
    //         break;
    //     case 4:
    //         left_counter_clockwise();
    //         output();
    //         break;
    //     case 5:
    //         up_clockwise();
    //         output();
    //         break;
    //     case 6:
    //         up_counter_clockwise();
    //         output();
    //         break;
    //     case 7:
    //         down_clockwise();
    //         output();
    //         break;
    //     case 8:
    //         down_counter_clockwise();
    //         output();
    //         break;
    //     case 9:
    //         front_clockwise();
    //         output();
    //         break;
    //     case 10:
    //         front_counter_clockwise();
    //         output();
    //         break;
    //     case 11:
    //         back_clockwise();
    //         output();
    //         break;
    //     case 12:
    //         back_counter_clockwise();
    //         output();
    //         break;
    //     // case 1:
    //     //     right_clockwise();
    //     //     break;
        
    //     default:
    //         break;
    //     }
    // }
    /***************** */
    // left_clockwise();
    // output();
    // left_counter_clockwise();
    // output();
    // right_clockwise();
    // output();
    // right_counter_clockwise();
    // output();
    // // left_clockwise();
    // // output();
    // front_clockwise();
    // output();
    // front_counter_clockwise();
    // output();
    // // front_counter_clockwise();
    // // output();
    // back_clockwise();
    // output();
    // back_counter_clockwise();
    // output();
    // // back_counter_clockwise();
    // // output();
    // up_clockwise();
    // output();
    // up_counter_clockwise();
    // output();
    // down_clockwise();
    // output();
    // down_counter_clockwise();
    // output();
    for(int i=0;i<6;i++){
        right_clockwise();
        output();
        Sleep(1000);
        up_clockwise();
        output();Sleep(1000);
        right_counter_clockwise();
        output();Sleep(1000);
        up_counter_clockwise();
        output();
    }
    // output();
    
}