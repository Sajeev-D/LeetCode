import collections

class Solution(object):
    def isValidSudoku(self, board):
        cols = collections.defaultdict(set)
        rows = collections.defaultdict(set)
        squares = collections.defaultdict(set) # key = (r/3,c/3)

        # The difference between the standard dictionary and defaultdict is that the 
        # standard dictionary will raise a KeyError if you try to access the value of a 
        # key that has not been assigned any value. With the defaultdict, it 
        # will automatically assign a default value to any key accessed that does
        # not already exist, in this case, an empty set.

        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue

                # can check if a value is inside a set like this
                # note: rows[r] might not exist yet but it will be created with an empty set
                if board[r][c] in rows[r] or board[r][c] in cols[c] or board[r][c] in squares[(r/3, c/3)]:
                    return False
                cols[c].add(board[r][c])
                rows[r].add(board[r][c])
                squares[(r/3, c/3)].add(board[r][c])

        return True
        """
        :type board: List[List[str]]
        :rtype: bool
        """