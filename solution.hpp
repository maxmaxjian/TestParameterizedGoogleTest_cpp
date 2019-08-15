
class Solution {
public:
  virtual int add(int i, int j) = 0;
};

class Solution1 : public Solution {
public:
  int add(int i, int j) override;
};
