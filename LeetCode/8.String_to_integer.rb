# @param {String} str
# @return {Integer}
def my_atoi(str)
  ans = str.to_i
  ans > 0 ? [ans, 2147483647].min : [ans, -2147483648].max
end
