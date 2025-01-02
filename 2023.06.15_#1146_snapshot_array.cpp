class SnapshotArray {
    vector<map<int, int>> sa;
    int curr = 0;
public:
    SnapshotArray(int length) {
        map<int, int> nm; nm.insert({0,0});
        for(int i = 0; i<length; i++){
            sa.push_back(nm);
        }
    }
    
    void set(int index, int val) {
        sa[index][curr] = val;
    }
    
    int snap() {
        return abs(curr--);
    }
    
    int get(int index, int snap_id) {
        return sa[index].lower_bound(-snap_id)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
