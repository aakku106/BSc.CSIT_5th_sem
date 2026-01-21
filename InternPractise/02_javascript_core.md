# JavaScript Core Concepts

## What are the differences between var, let, and const?

The main differences are scope, hoisting behavior, and reassignment rules.

`var` is function-scoped, meaning it is accessible anywhere within the function where it is declared. It can be redeclared and reassigned, and it is hoisted to the top of its scope, which can lead to unexpected behavior.

`let` is block-scoped, meaning it only exists within the curly braces where it is defined. It cannot be redeclared in the same scope but can be reassigned. It is also hoisted, but not initialized, so accessing it before declaration results in an error.

`const` is also block-scoped and cannot be reassigned or redeclared. However, if it holds an object or array, the contents of that object or array can still be modified. The reference itself is constant, not the value.

In practice, I use `const` by default, `let` when I need to reassign a variable, and avoid `var` entirely to prevent scope-related bugs.

## Explain closures in JavaScript

A closure is a function that has access to variables from its outer scope, even after that outer function has finished executing. This happens because JavaScript functions carry a reference to their lexical environment.

For example, if a function is defined inside another function, the inner function can access variables from the outer function, even if the outer function has already returned. This is useful for creating private variables or functions that remember state.

Closures are commonly used in event handlers, callbacks, and when implementing patterns like module patterns where you want to encapsulate data and expose only specific functions.

## What is hoisting?

Hoisting is JavaScript's behavior of moving variable and function declarations to the top of their scope before code execution. This means you can reference a function or variable before it appears in the code, but the behavior differs depending on how it is declared.

Function declarations are fully hoisted, so you can call them before they are defined in the code.

Variable declarations with `var` are hoisted, but their initialization is not, so accessing them before assignment gives `undefined`.

Variables declared with `let` and `const` are hoisted but not initialized, so accessing them before declaration results in a ReferenceError. This zone before initialization is called the temporal dead zone.

Understanding hoisting helps prevent bugs related to variable access and initialization order.

## What is the event loop?

The event loop is the mechanism that allows JavaScript to handle asynchronous operations despite being single-threaded. It manages the execution of code, processing events, and executing queued tasks.

JavaScript runs code in the call stack. When asynchronous operations like `setTimeout`, API calls, or event listeners are encountered, they are handled by browser APIs or Node.js APIs, not by JavaScript itself. When these operations complete, their callbacks are placed in the task queue.

The event loop continuously checks if the call stack is empty. When it is, it takes the first callback from the task queue and pushes it onto the call stack for execution. This allows JavaScript to perform non-blocking operations without freezing the application.

There are also microtasks (like promise callbacks) that have higher priority and are executed before regular tasks.

Better Ans if you can handle:

The event loop is a scheduling mechanism implemented by the host environment that coordinates execution between the JavaScript call stack and multiple callback queues. JavaScript executes code synchronously on a single call stack, while asynchronous operations are handled by external APIs. When these operations complete, references to their callbacks are placed into task or microtask queues. The event loop continuously monitors the call stack, and when it becomes empty, it first executes all queued microtasks, then moves the next task into the call stack for execution. This design allows asynchronous behavior without concurrent JavaScript executio

## How does JavaScript handle async code?

JavaScript handles asynchronous code using callbacks, promises, and async/await syntax, all coordinated by the event loop.

Callbacks are functions passed as arguments to be executed later when an operation completes. However, deeply nested callbacks can lead to hard-to-read code.

Promises represent a value that will be available in the future. They can be in one of three states: pending, fulfilled, or rejected. Promises allow chaining with `.then()` and `.catch()` for cleaner asynchronous code.

Async/await is syntactic sugar over promises that makes asynchronous code look synchronous. An `async` function returns a promise, and `await` pauses execution until the promise resolves, making the code easier to read and reason about.

## Difference between == and ===?

`==` is the loose equality operator that performs type coercion before comparison. This means it converts values to the same type before checking if they are equal, which can lead to unexpected results.

`===` is the strict equality operator that checks both value and type without any conversion. Values must be of the same type and have the same value to be considered equal.

For example, `5 == "5"` is true because the string is converted to a number, but `5 === "5"` is false because they are different types.

I use `===` by default to avoid unintended type coercion and to make equality checks more predictable.

## What are promises?

A promise is an object that represents the eventual completion or failure of an asynchronous operation. It provides a cleaner alternative to callbacks for handling asynchronous code.

A promise can be in one of three states: pending (initial state), fulfilled (operation completed successfully), or rejected (operation failed).

Promises are created using the `new Promise()` constructor, which takes a function with `resolve` and `reject` parameters. You handle the result using `.then()` for success and `.catch()` for errors.

Promises can be chained, allowing sequential asynchronous operations to be written in a more readable way. They also support `Promise.all()` for running multiple promises in parallel and `Promise.race()` for handling the first resolved promise.

## What is async/await under the hood?

Async/await is syntactic sugar built on top of promises. When you declare a function as `async`, it automatically returns a promise, even if you return a regular value.

The `await` keyword pauses the execution of the async function and waits for the promise to resolve. Under the hood, this is implemented using generators and promises. The function execution is suspended, allowing other code to run, and resumes when the promise settles.

If the awaited promise is rejected and not caught with a try/catch block, the async function's returned promise will be rejected with that error.

This makes asynchronous code look and behave more like synchronous code, improving readability while maintaining non-blocking behavior.

## What happens when an error is thrown inside an async function?

When an error is thrown inside an async function, the function's returned promise is rejected with that error. If the error is not caught within the function, it propagates to the caller.

To handle errors in async functions, you can use try/catch blocks around await statements. This catches errors from rejected promises and synchronous errors in a unified way.

If an error is not caught, it can be handled by attaching a `.catch()` handler to the promise returned by the async function. Uncaught errors in async functions can lead to unhandled promise rejections, which should be avoided.

## Explain reference vs value in JavaScript

In JavaScript, primitive types (numbers, strings, booleans, null, undefined, symbols) are passed and assigned by value. This means when you assign or pass them, a copy of the value is created.

Objects, arrays, and functions are passed and assigned by reference. This means the variable holds a reference to the memory location where the data is stored, not the data itself. When you assign an object to another variable, both variables point to the same object in memory.

This distinction is important because modifying an object through one reference affects all references to that object. To avoid unintended mutations, you need to create copies of objects using methods like spread operator or `Object.assign()`.

## How does garbage collection work in JS (high level)?

Garbage collection in JavaScript automatically frees memory that is no longer being used. The JavaScript engine tracks which objects are reachable from the root (global scope, currently executing functions) through references.

The most common algorithm used is mark-and-sweep. The garbage collector marks all reachable objects starting from the roots, then sweeps through memory and removes any objects that were not marked as reachable.

Objects become eligible for garbage collection when there are no more references to them from any reachable code. This happens automatically, so developers do not manually free memory like in C.

However, developers still need to be careful about memory leaks, which occur when references to objects are unintentionally kept, preventing garbage collection.

## What is a memory leak in JavaScript?

A memory leak occurs when memory that is no longer needed is not released because the program still holds references to it. This prevents the garbage collector from freeing that memory, causing the application to consume more memory over time.

Common causes include global variables that are never cleared, event listeners that are not removed when elements are destroyed, closures that hold references to large objects unnecessarily, and timers that are not cleared.

In frontend applications, memory leaks can cause performance degradation, especially in single-page applications that run for extended periods.

To prevent memory leaks, I ensure event listeners are removed when components unmount, clear timers when they are no longer needed, and avoid creating unnecessary closures that capture large objects.

## How do you avoid unnecessary re-renders?

In React, avoiding unnecessary re-renders improves performance. This can be achieved through several techniques.

First, use `React.memo` to memoize functional components so they only re-render when their props change. This is useful for components that receive the same props frequently.

Second, use the `useMemo` hook to memoize expensive computations so they only run when dependencies change, not on every render.

Third, use the `useCallback` hook to memoize function references, preventing child components from re-rendering when passed as props.

Fourth, ensure state is structured properly—avoid storing derived values in state and keep related data together to minimize updates.

Finally, use proper key props in lists to help React efficiently identify which items have changed.
