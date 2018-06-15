#include<iostream>
#include<string>
using namespace std;
class tower {
  public:
    int hp;
    int id;
    bool alive;
};
class enemy {
  public:
    int el;
    int er;
    enemy() {
        el=0;
        er=0;
    }
};
class unit {
  public:
    int cost;
    char k;
    void setup() {
        if(k=='1')cost=5;
        if(k=='3')cost=2;
        if(k=='C')cost=7;
        if(k=='4')cost=6;
        if(k=='6')cost=4;
        if(k=='7')cost=8;
        if(k=='8')cost=5;
        if(k=='9')cost=3;
    }
};
void checkem() {}
void normal() {}
void nothing() {}
int main() {
    int i=0;
    int j=0;
    int mana;
    tower t[6];
    string garbage;
    char g;
    char gar[20];
    cout<<"1 3 C 4 6 7 8 9"<<endl;
    while(1) {
        cin>>garbage;
        if(garbage!="BEGIN") {
            continue;
        }
        unit u[3];
        enemy en;
        cin>>garbage;
        cin>>garbage;
        cin>>garbage;
        cin>>mana;
        cin>>garbage;
        cin>>u[0].k;
        cin>>u[1].k;
        cin>>u[2].k;
        cin>>u[3].k;
        u[0].setup();
        u[1].setup();
        u[2].setup();
        u[3].setup();
        i=1;
        j=1;
        while(1) {
            cin>>garbage;
            if(garbage=="TOWER") {
                cin>>i;
                cin>>t[i].hp;
                t[i].alive=true;
                continue;
            }
            int px,py,hp;
            char tag;
            if(garbage=="END") {
                break;
            }
            cin>>tag>>gar>>px>>g>>py>>gar>>hp;
            if(garbage=="FRIEND") {
                continue;
            }
            if(garbage=="ENEMY") {
                if(j<=10) {
                    /* if(py<16&&px>6&&px<14) {
                         en.el=1;
                     }*/
                    if(px<10.5) en.el++;
                    else en.er++;
                }
                continue;
            }
        }
        /*        if(en.el>=en.er) {
                    if(mana>=u[0].cost) {
                        cout<<"1 "<<u[0].k<<" "<<"5 15\n0";
                        continue;
                    }
                }

                if(en.er>en.el) {

                    if(mana>=u[0].cost) {
                        cout<<"1 "<<u[0].k<<" "<<"15 15\n0";
                        continue;

                    }

                }
        */
        if(mana>=u[0].cost) {
            cout<<"1 "<<u[0].k<<" "<<"7 19\n0";
            //break;
        } else  cout<<"0";
    }
    return 0;
}
