class Solution {
public:
    string countOfAtoms(string formula) {

       int n = formula.size();

       stack<unordered_map<string,int>> st;
       st.push(unordered_map<string,int>());

       int i=0;

       while(i < n){

        if(formula[i] == '('){

            st.push(unordered_map<string,int>());
            i++;

        }

        else if(formula[i] == ')'){

            unordered_map<string,int> curr_map = st.top();
            st.pop();
            i++;

            string multi;
            while(i < n && isdigit(formula[i])){
                multi.push_back(formula[i]);
                i++;
            }

            if(!multi.empty()){
                int mul = stoi(multi);
                for(auto &it : curr_map){
                    string curr_atom = it.first;
                    int curr_count = it.second;

                    curr_map[curr_atom] = curr_count * mul;
                } 
            }

            for(auto &it : curr_map){
                string element = it.first;
                int count = it.second;
                st.top()[element] += count;
            }
        }

        else{

            string atom ;
            atom.push_back(formula[i]);
            i++;

            if(i < n && isalpha(formula[i]) && islower(formula[i])){
                atom += formula[i];
                i++;
            }

            string count;
            while(i < n && isdigit(formula[i])){
                count += formula[i];
                i++;
            }
            
            int num = (count.empty()) ? 1 : stoi(count);
            st.top()[atom] += num;

        }
       } 



       map<string,int> sorted_map(begin(st.top()),end(st.top()));

       string result = "";

       for(auto &it :sorted_map){
            string element = it.first;
            int count = it.second;

            result += element;

            if(count>1){
                result += to_string(count);
            }
       }

    return result ;
    
    }
};
