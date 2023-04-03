class Solution {
 public:
  int numRescueBoats(vector<int> &people, int limit) {
    int ans = 0;

    std::sort(people.begin(), people.end());
    int start = 0;
    int end = people.size() - 1;
    while (start < end) {
      ans++;
      if (people[start] + people[end] <= limit) {
        start++;
      }
      end--;
    }
    return ans + (start == end ? 1 : 0);
  }
};
