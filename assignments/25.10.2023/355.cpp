class Twitter {
public:
    int timer;
    unordered_map<int, deque<pair<int,int>>> tweets;
    unordered_map<int, unordered_set<int>> followees;
    Twitter() {
        timer = 0;
    }
    
    void postTweet(int userId, int tweetId) {
        if(!tweets.count(userId))
        {
            followees[userId].insert(userId);
        }
       tweets[userId].push_front({timer++, tweetId});
       if(tweets[userId].size() > 10) tweets[userId].pop_back();
    }
    
    vector<int> getNewsFeed(int userId) {

        using pii = pair<int,int>;
        priority_queue< pii, vector<pii>, greater<pii> > userFeed;

        for(auto followeeId : followees[userId])
        {
            cout<<userId<<" "<<followeeId<<endl;
            for(auto timeAndTweet: tweets[followeeId])
            {
                if(userFeed.size() < 10) {
                    userFeed.push(timeAndTweet);
                }
                else {
                    auto [lastTime, lastTweet]  = userFeed.top();
                    if(lastTime < timeAndTweet.first) {
                        userFeed.pop();
                        userFeed.push(timeAndTweet);
                    }
                }
            }
        }

        vector<int> feed;
        while(!userFeed.empty())
        {
            auto [time, tweet] = userFeed.top();
            userFeed.pop();

            feed.push_back(tweet);
        }
        reverse(feed.begin(), feed.end());
        return feed;
    }
    
    void follow(int followerId, int followeeId) {
        followees[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followees[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */