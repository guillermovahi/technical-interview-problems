# Python
class Solution(object):
	"""
	:type isConnected: List[List[int]]
	:rtype: int
	"""
	def findCircleNum(self, isConnected):
		N = len(isConnected)
		seen = set()
		def dfs(node):
			for nei, adj in enumerate(isConnected[node]):
				if adj and nei not in seen:
					seen.add(nei)
					dfs(nei)
		ans = 0
		for i in xrange(N):
			if i not in seen:
				dfs(i)
				ans += 1
		return ans