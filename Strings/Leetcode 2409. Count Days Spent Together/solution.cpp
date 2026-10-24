class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aliceArriveMonth=stoi(arriveAlice.substr(0,2));
        int aliceArriveDate=stoi(arriveAlice.substr(3,2));
        int aliceLeaveMonth=stoi(leaveAlice.substr(0,2));
        int aliceLeaveDate=stoi(leaveAlice.substr(3,2));
        int bobArriveMonth=stoi(arriveBob.substr(0,2));
        int bobArriveDate=stoi(arriveBob.substr(3,2));
        int bobLeaveMonth=stoi(leaveBob.substr(0,2));
        int bobLeaveDate=stoi(leaveBob.substr(3,2));
        int aliceArriveDay=0;
        int aliceLeaveDay=0;
        int month[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
        for(int i=0;i<aliceArriveMonth-1;i++){
             aliceArriveDay=aliceArriveDay+month[i];
        }
        aliceArriveDay=aliceArriveDay+aliceArriveDate;
        for(int i=0;i<aliceLeaveMonth-1;i++){
             aliceLeaveDay=aliceLeaveDay+month[i];
        }
        aliceLeaveDay+=aliceLeaveDate;
        int aliceStay=aliceLeaveDay-aliceArriveDay;
        int bobArriveDay=0;
        int bobLeaveDay=0;
        for(int i=0;i<bobArriveMonth-1;i++){
            bobArriveDay=bobArriveDay+month[i];
        }
        bobArriveDay=bobArriveDay+bobArriveDate;
        for(int i=0;i<bobLeaveMonth-1;i++){
            bobLeaveDay=bobLeaveDay+month[i];
        }
        bobLeaveDay=bobLeaveDay+bobLeaveDate;
        int bobStay=bobLeaveDay-bobArriveDay;
        int start=max(aliceArriveDay,bobArriveDay);
        int end=min(aliceLeaveDay,bobLeaveDay);
        if(start>end) return 0;
        return end-start+1;
    }
};
