#define ll long long
#define mod 1000000007
class Solution {
public:
    int n, goal;
    int dp[101][101];
    ll solve(int songs, int playlists, int k){
        //base case
        if(playlists == goal) return songs == n;

        if(dp[songs][playlists] != -1) return dp[songs][playlists];

        ll ans = 0;
        ans = ((max(0, songs - k))*solve(songs, playlists+1, k)) % mod;
        ans += ((n-songs)*solve(songs+1, playlists+1, k)%mod) % mod;

        ans = ans % mod;
        return dp[songs][playlists] = ans;
    }

    int numMusicPlaylists(int n, int goal, int k) {
        this->n = n;
        this->goal = goal;
        
        memset(dp, -1, sizeof(dp));

        return solve(0, 0, k);
    }
};


//Please upvote if you find it helpful.dp
