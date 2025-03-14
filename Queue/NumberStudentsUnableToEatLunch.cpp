class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count0 = count(students.begin(), students.end(), 0);
        int count1 = students.size() - count0;

        for(int i=0; i<sandwiches.size(); i++)
        {
           if(sandwiches[i] == 0 && count0 == 0) break;
           if(sandwiches[i] == 1 && count1 == 0) break;

            sandwiches[i] == 0? count0-- : count1--;
        }

        return count0 + count1;
    }
};