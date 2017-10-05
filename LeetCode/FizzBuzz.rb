# @param {Integer} n
# @return {String[]}
def fizz_buzz(n)
  ans = []
  (1..n).each do |i|
    s = ""
    s += "Fizz" if i % 3 == 0
    s += "Buzz" if i % 5 == 0
    s += i.to_s if s == ""
    ans << s
  end
  ans
end
