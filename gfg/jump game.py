# User function Template for python3


class Solution:

    @staticmethod
    def canReach(A, N):
        lastReach = N - 1
        for i in range(N - 2, -1, -1):
            if A[i] >= lastReach - i:
                lastReach = i
        return 1 if lastReach == 0 else 0


# {
#  Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        N = int(input())
        A = list(map(int, input().split()))

        ob = Solution()
        print(ob.canReach(A, N))
# } Driver Code Ends
