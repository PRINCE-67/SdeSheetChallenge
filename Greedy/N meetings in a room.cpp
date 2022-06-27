vector<pair<int, int>>v;
for (int i = 0; i < n; i++) {
    v.push_back({end[i], start[i]});
}
sort(v.begin(), v.end());

int maxend = v[0].first, maxstart = v[0].second;
int cnt = 1;
for (int i = 0; i < n; i++) {
    if (v[i].second > maxstart && maxend < v[i].second) {
        cnt++;
        maxend = v[i].first;
        maxstart = v[i].second;
    }
}