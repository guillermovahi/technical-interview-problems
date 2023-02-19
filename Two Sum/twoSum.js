/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const numMap = new Map();
    for (let i = 0; i < nums.length; i++) {
        const needed = target - nums[i];
        if (numMap.has(needed)) {
            return [numMap.get(needed), i];
        }
        numMap.set(nums[i], i);
    }
    return null;
};

module.exports = twoSum