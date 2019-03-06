# @param {Integer} num
# @return {String}
def to_hex(num)
  num += 0x100000000 if num < 0
  num.to_s(16)
end
