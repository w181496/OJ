# @param {Integer[]} nums
# @return {Integer[][]}
def permute_unique(nums)
  nums.permutation.to_a.uniq
end
