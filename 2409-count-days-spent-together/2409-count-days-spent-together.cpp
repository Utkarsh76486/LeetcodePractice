class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        //Dates ko day number me convert karna
        auto getDay=[](string s,int d[]){
            int m=stoi(s.substr(0,2));
            int day=stoi(s.substr(3,2));
            for(int i=0;i<m-1;i++){
                day+=d[i];
            }
            return day;
        };
        int a1=getDay(arriveAlice,days);
        int a2=getDay(leaveAlice,days);
        int b1=getDay(arriveBob,days);
        int b2=getDay(leaveBob,days);

        return max(0,min(a2,b2)-max(a1,b1)+1);
        
        
    }
};