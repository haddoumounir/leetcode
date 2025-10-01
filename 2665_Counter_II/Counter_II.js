/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) 
{
    let tmp = init;
    function increment()
    {
        return (++tmp);
    }
    function decrement()
    {
        return (--tmp);
    }
    function reset()
    {
        return (tmp = init);
    }
    return { increment, decrement, reset };
};
