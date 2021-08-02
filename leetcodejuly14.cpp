class Solution {
public:
    double angleClock(int hour, int minutes) {
        double r1=0,r2=0,rfinal=0,subt=0,r3=0;
        double result=0;
        if(hour==12)
        {
            hour=0;
        }
        r1 = abs((hour*30)-((minutes/5.0)*30));
        subt = minutes*0.5;
        if((minutes/5.0 )  >= hour)
        {
        r2 = abs(r1-subt);
        }
        else
        {
            r2 = abs(r1+subt);
        }
        r3 = abs(360-r2);
        result = min(r2,r3);
        return result;
    }
};