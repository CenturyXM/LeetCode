# 日期：2020/04/16
# 作者：孟庆国
# 链接：https://leetcode-cn.com/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof/
# 说明：每次压入一个元素后都判断一下接下来是否有弹出操作

class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        s = []
        j = 0
        for i in range(len(pushed)):
            s.append(pushed[i])
            while len(s)!=0 and s[-1]==popped[j]:
                s.pop()
                j += 1;
        return len(s)==0