class Solution {

    bool vertical = false;

public:

    bool checkStraightLine(vector<vector<int>>& coordinates) {



        float a = coordinates[0][0]-coordinates[1][0];

        float b = coordinates[0][1]-coordinates[1][1];

        float napr = a/b;

        if(coordinates[0][1]==coordinates[1][1]) goto vertical;

        for(int i = 2; i<coordinates.size(); i++){

            float a1 = coordinates[0][0]-coordinates[i][0];

            float b1 = coordinates[0][1]-coordinates[i][1];

            float napr1 = a1/b1;

            if(napr1!=napr)return false;

        }

        return true;



        vertical:

        for(int i = 2; i<coordinates.size(); i++){

            if(coordinates[0][1]!=coordinates[i][1]) return false;

        }

        return true;

    }

};
