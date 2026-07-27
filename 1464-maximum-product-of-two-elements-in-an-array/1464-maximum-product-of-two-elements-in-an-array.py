class Solution:
    def maxProduct(self, a: List[int]) -> int:
        a.sort()
        return ((a[len(a)-1]-1)*(a[len(a)-2]-1))
        