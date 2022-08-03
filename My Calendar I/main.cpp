    //@Author: RAUNAQ SINGH
    //Concept used "start" is used as a key abd "end" is used as a value
    map<int,int> mpp;
    MyCalendar() {

    }
    bool book(int start, int end) {
        if(mpp.empty()) mpp[start]=end;
        else{
            for(auto it=mpp.begin();it!=mpp.end();it++){
                //Check if start is greater than the start in the map and is also less than the end OR
                //Check if end is greater than start and is also less than end
                //Check if start is less than the start in map and end is greater than the end in map
                //All these conditions will return a false
                if((start>=it->first && start<it->second) || (start<=it->first && end>=it->second) || (end>it->first && end<=it->second)) return false;
                //Since if the start is greater than or equal to the incomming end it is sure that intersection will never occour so just break out of the loop
                else if(it->first>=end) break;
            }
            mpp[start]=end;
        }
        return true;
    }
};
