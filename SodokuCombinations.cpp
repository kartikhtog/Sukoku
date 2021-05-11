#include <iostream>
#include <math.h>
#include <time.h>
#include "Position.h"
#include "SodokuDefinations.h"
#include "SodokuCombinations.h"

SodokuCombinations::SodokuCombinations(){
    time(&now);//the number of seconds elapsed since January 1, 1970
    srand(now);// set seed
}
   
void SodokuCombinations::CreateListsWithRamdomGenerations() {
    for (int i = 0;i < 100; i++){
        CreateListWithRamdomGenerations();
    }
};

void SodokuCombinations::CreateListWithRamdomGenerations(){
    // rows
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;  
    int h;
    int i;
    //columns
    int j;int k;int l; int m;int n;int o; int p;int q;int r;
    
    a = (rand()%3); //aa.location.row = a; 
    b = (rand()%3)+3; //bb.location.row = b;
    c = (rand()%3)+6; //cc.location.row = c;
    while((d = ((rand()%3)  ))==a); //dd.location.row = d;
    while((e = ((rand()%3)+3))==b); //ee.location.row = e;
    while((f = ((rand()%3)+6))==c); //ff.location.row = f;
    g=-1; while(++g == a || g == d); //gg.location.row = g;
    h=2; while(++h == b || h == e); //hh.location.row = h;
    i=5; while(++i == c || i == f); //ii.location.row = i;
    
    j = (rand()%3); //aa.location.row = a; 
    while((k = ((rand()%3)  ))==j); //dd.location.row = d;
    l=-1; while(++l == j || l == k); //gg.location.row = g;
    
    m = (rand()%3)+3;// bb.location.row = b;
    while((n = ((rand()%3)+3))==m); //ee.location.row = e;
    o=2; while(++o == n || o == m); //hh.location.row = h;
    
    p = (rand()%3)+6; //cc.location.row = c;
    while((q = ((rand()%3)+6))==p); //ff.location.row = f;
    r=5; while(++r == q || r == p); //ii.location.row = i;

    /// one list
    GridCordinates grid0; grid0.location.column = j; grid0.location.row = a; BoxCordinates* box0 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid0,box0);
    GridCordinates grid1; grid1.location.column = k; grid1.location.row = b; BoxCordinates* box1 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid1,box1);
    GridCordinates grid2; grid2.location.column = l; grid2.location.row = c; BoxCordinates* box2 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid2,box2);
    GridCordinates grid3; grid3.location.column = m; grid3.location.row = d; BoxCordinates* box3 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid3,box3);
    GridCordinates grid4; grid4.location.column = n; grid4.location.row = e; BoxCordinates* box4 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid4,box4);
    GridCordinates grid5; grid5.location.column = o; grid5.location.row = f; BoxCordinates* box5 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid5,box5);
    GridCordinates grid6; grid6.location.column = p; grid6.location.row = g; BoxCordinates* box6 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid6,box6);
    GridCordinates grid7; grid7.location.column = q; grid7.location.row = h; BoxCordinates* box7 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid7,box7);
    GridCordinates grid8; grid8.location.column = r; grid8.location.row = i; BoxCordinates* box8 = new BoxCordinates; PositionConversion::convertToPositionInBox(grid8,box8);
    std::cout << box0->location.box;
    std::cout << box1->location.box;
    std::cout << box2->location.box;
    std::cout << box3->location.box;
    std::cout << box4->location.box;
    std::cout << box5->location.box;
    std::cout << box6->location.box;
    std::cout << box7->location.box;
    std::cout << box8->location.box;
    std::cout << std::endl;
    delete box0;
    delete box1;
    delete box2;
    delete box3;
    delete box4;
    delete box5;
    delete box6;
    delete box7;
    delete box8;
}

void SodokuCombinations::deleteMeLater() {
    // fill in numbers by array
    // 5,1,9,2,8,3,7,4,6
    time_t now;
    time(&now);//the number of seconds elapsed since January 1, 1970
    srand(now);// set seed
    // setup
    for (int i =0; i< Sodoku_Size ; i++) {
        for (int j =0; j< Sodoku_Size;j++){
            solved[i][j].value.value = 0;
            solved[i][j].value.isValid = 0;
        }
    }
    for (int z : {1}) {

        // rows
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;  
        int h;
        int i;
        //columns
        int j;
        int k;
        int l;
        int m;
        int n;
        int o;
        int p;
        int q;
        int r;
        do {
            a = (rand()%3); //aa.location.row = a; 
            b = (rand()%3)+3; //bb.location.row = b;
            c = (rand()%3)+6; //cc.location.row = c;
            while((d = ((rand()%3)  ))==a); //dd.location.row = d;
            while((e = ((rand()%3)+3))==b); //ee.location.row = e;
            while((f = ((rand()%3)+6))==c); //ff.location.row = f;
            g=-1; while(++g == a || g == d); //gg.location.row = g;
            h=2; while(++h == b || h == e); //hh.location.row = h;
            i=5; while(++i == c || i == f); //ii.location.row = i;
            
            j = (rand()%3); //aa.location.row = a; 
            while((k = ((rand()%3)  ))==j); //dd.location.row = d;
            l=-1; while(++l == j || l == k); //gg.location.row = g;
            
            m = (rand()%3)+3;// bb.location.row = b;
            while((n = ((rand()%3)+3))==m); //ee.location.row = e;
            o=2; while(++o == n || o == m); //hh.location.row = h;
            
            p = (rand()%3)+6; //cc.location.row = c;
            while((q = ((rand()%3)+6))==p); //ff.location.row = f;
            r=5; while(++r == q || r == p); //ii.location.row = i;
            
        } while ( // (3*3 + 3*2  + 3*1) + (3*3 , 2*2 ,1*1) ,(1*3 1*2 1*1) // 18 + 14 + 6 // 38
        ( // only 38 posibilites
        // might as well find these posibilities
        solved[j][a].value.isValid ||
        solved[k][b].value.isValid ||
        solved[l][c].value.isValid ||
        solved[m][d].value.isValid ||
        solved[n][e].value.isValid ||
        solved[o][f].value.isValid ||
        solved[p][g].value.isValid ||
        solved[q][h].value.isValid ||
        solved[r][i].value.isValid)
        );
        solved[j][a].value.isValid = 1; solved[j][a].value.value = z;
        solved[k][b].value.isValid = 1; solved[k][b].value.value = z;
        solved[l][c].value.isValid = 1; solved[l][c].value.value = z;
        solved[m][d].value.isValid = 1; solved[m][d].value.value = z;
        solved[n][e].value.isValid = 1; solved[n][e].value.value = z;
        solved[o][f].value.isValid = 1; solved[o][f].value.value = z;
        solved[p][g].value.isValid = 1; solved[p][g].value.value = z;
        solved[q][h].value.isValid = 1; solved[q][h].value.value = z;
        solved[r][i].value.isValid = 1; solved[r][i].value.value = z;
    }
}

