int selected_n;

bool compare(string a, string b){
    int n = selected_n;
    while (a[n] == b[n] && n < a.size()-1){
        n++;
    }
    return a[n] < b[n]; 
}

vector<string> solution(vector<string> strings, int n) {
    
    selected_n = n;
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}