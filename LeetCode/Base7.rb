# @param {Integer} num
# @return {String}
def convert_to_base7(num)
  num < 0 ? "-"+(-num).to_s(7) : num.to_s(7) 
end
