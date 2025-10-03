/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  const chunks = s.split(" ").filter((word) => word !== "");
  return chunks[chunks.length - 1].length;
};
