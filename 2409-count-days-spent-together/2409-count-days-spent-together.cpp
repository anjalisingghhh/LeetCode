class Solution 
{
public:
    int getDay(string date) 
    {
        vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};

        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int total = day;

        for(int i = 0; i < month - 1; i++) 
        {
            total += days[i];
        }
        return total;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {

        int a1 = getDay(arriveAlice);
        int a2 = getDay(leaveAlice);
        int b1 = getDay(arriveBob);
        int b2 = getDay(leaveBob);

        int count = 0;

        for(int day = a1; day <= a2; day++) 
        {
            if(day >= b1 && day <= b2)
                count++;
        }
        return count;
    }
};