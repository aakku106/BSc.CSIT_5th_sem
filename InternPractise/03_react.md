# React

## Why React? What problem does it solve?

React solves the problem of building complex user interfaces that need to update efficiently when data changes. Before React, managing DOM updates manually was error-prone and difficult to maintain in large applications.

React introduces a declarative approach where you describe what the UI should look like based on the current state, and React handles the actual DOM updates efficiently. This makes code more predictable and easier to reason about.

The component-based architecture allows you to break down complex UIs into smaller, reusable pieces that can be developed, tested, and maintained independently. This improves code organization and reusability.

React's virtual DOM enables efficient updates by calculating the minimal set of changes needed and batching them, which improves performance compared to directly manipulating the DOM.

## What is a component?

A component is a reusable piece of UI that encapsulates its own structure, logic, and styling. It is the fundamental building block of React applications.

Components can be as simple as a button or as complex as an entire page. They accept inputs called props and return React elements that describe what should appear on the screen.

Components promote code reusability and separation of concerns. You can compose larger components from smaller ones, creating a hierarchical structure that matches your UI.

There are two types of components: functional components, which are JavaScript functions that return JSX, and class components, which use ES6 classes. Functional components with hooks are now the standard approach.

## Functional components vs class components?

Functional components are JavaScript functions that accept props and return JSX. They are simpler, easier to read, and require less boilerplate than class components.

Class components use ES6 classes and extend `React.Component`. They have lifecycle methods like `componentDidMount` and `componentDidUpdate`, and use `this.state` for managing state.

Before hooks were introduced, class components were necessary for state management and lifecycle methods. Now, hooks like `useState` and `useEffect` allow functional components to have the same capabilities.

Functional components with hooks are now preferred because they result in cleaner code, avoid issues with `this` binding, and make it easier to share logic between components through custom hooks.

## What are hooks?

Hooks are functions that let you use state and other React features in functional components without writing a class. They were introduced to make functional components more powerful while keeping the code simple.

Common built-in hooks include `useState` for managing component state, `useEffect` for side effects, `useContext` for accessing context, and `useRef` for accessing DOM elements or persisting values across renders.

Hooks follow specific rules: they must be called at the top level of a component (not inside loops or conditions), and they must be called from React functional components or custom hooks.

Custom hooks allow you to extract component logic into reusable functions, promoting code sharing without changing the component hierarchy.

## Explain useState

`useState` is a hook that allows you to add state to functional components. It returns an array with two elements: the current state value and a function to update that state.

When you call the state update function, React schedules a re-render of the component with the new state value. The component function runs again, and `useState` returns the updated value.

State updates may be asynchronous and batched for performance. If you need to update state based on the previous value, you should pass a function to the setter that receives the previous state.

Each call to `useState` creates an independent piece of state. You can use multiple `useState` calls in a single component to manage different state variables.

## Explain useEffect

`useEffect` is a hook for performing side effects in functional components. Side effects include data fetching, subscriptions, timers, or manually changing the DOM.

It takes two arguments: a function that contains the side effect logic, and an optional dependency array. The effect function runs after the component renders.

If you provide a dependency array, the effect only runs when one of the dependencies changes. An empty dependency array means the effect runs only once after the initial render. No dependency array means it runs after every render.

The effect function can return a cleanup function that runs before the component unmounts or before the effect runs again. This is used to cancel subscriptions, clear timers, or clean up other resources.

## When does useEffect run?

`useEffect` runs after the component renders and the browser has painted the screen. This is different from lifecycle methods like `componentDidMount`, which run synchronously after rendering but before the browser updates the screen.

The timing depends on the dependency array:

- No dependency array: runs after every render
- Empty dependency array `[]`: runs once after the initial render
- With dependencies `[dep1, dep2]`: runs after the initial render and whenever any dependency changes

If the effect returns a cleanup function, that cleanup runs before the effect runs again (on subsequent renders) and when the component unmounts.

For effects that need to run before the browser paints (like measuring layout), you would use `useLayoutEffect` instead, but `useEffect` is appropriate for most use cases.

## What causes re-renders in React?

A component re-renders when its state changes, when it receives new props, or when a parent component re-renders.

State changes triggered by `useState` or `useReducer` cause the component to re-render. Context changes also cause all components consuming that context to re-render.

When a parent component re-renders, all its child components re-render by default, even if their props have not changed. This is why memoization techniques like `React.memo` are useful for optimizing performance.

Changing a prop reference (like passing a new object or function) will cause child components to re-render even if the values are the same. This is why `useMemo` and `useCallback` are important for optimizing prop references.

## What is prop drilling?

Prop drilling is the process of passing props through multiple layers of components to reach a deeply nested component that needs the data. Intermediate components receive and pass along props they do not use themselves.

This creates several problems: it makes components tightly coupled, harder to refactor, and clutters the code with props that are only passed through.

Solutions include using Context API to provide data to deeply nested components without passing through intermediates, using state management libraries like Redux or Zustand, or restructuring components to avoid deep nesting.

Another approach is composition, where you pass components as children or props, allowing you to avoid passing data through intermediate layers.

## How do you share state between components?

For parent-child relationships, you can lift state up to the nearest common ancestor and pass it down as props. The parent manages the state, and children receive it and functions to update it.

For components that are not directly related, you can use Context API to make state available to any component in the tree without prop drilling.

For complex state logic shared across many components, state management libraries like Redux, Zustand, or Jotai provide centralized state storage and predictable update patterns.

For simple cases, custom hooks can encapsulate shared state logic that can be reused across components, though each component using the hook gets its own instance of the state.

## What is reconciliation?

Reconciliation is the process React uses to determine what changes need to be made to the actual DOM when a component re-renders. React compares the new virtual DOM tree with the previous one to find the differences.

React uses a diffing algorithm that makes assumptions to optimize this process. It assumes that elements of different types produce different trees, so it will replace the entire subtree. Elements of the same type are updated with new props.

Keys in lists help React identify which items have changed, been added, or removed, making updates more efficient. Without proper keys, React might re-render more than necessary.

The reconciliation process allows React to update the UI efficiently without rebuilding the entire DOM, which would be slow and cause loss of user input and focus.

## What is the virtual DOM?

The virtual DOM is a lightweight JavaScript representation of the actual DOM. It is a tree of JavaScript objects that mirrors the structure of the real DOM elements.

When state changes, React creates a new virtual DOM tree and compares it with the previous one. This comparison happens in memory, which is much faster than directly manipulating the real DOM.

After finding the differences (through reconciliation), React updates only the parts of the real DOM that actually changed. This minimizes expensive DOM operations and improves performance.

The virtual DOM is an implementation detail of React. From a developer perspective, you write declarative code describing what the UI should look like, and React handles the efficient updates.

## How does React decide what to re-render?

React re-renders a component when its state or props change. It uses reference equality checks (using `Object.is`) to determine if props or state have changed.

For props, if the parent passes new object or function references, React considers them changed even if the values inside are the same. This is why memoization is important for performance.

React does not deeply compare objects or arrays by default. If you update an object by mutating it without creating a new reference, React will not detect the change and will not re-render.

During reconciliation, React compares elements by type and key. If the type changes, React replaces the entire component. If the key changes in lists, React treats it as a different element.

## What is a key in lists, and why does it matter?

A key is a special attribute you provide to elements in a list to help React identify which items have changed, been added, or removed.

Keys should be stable, unique among siblings, and predictable. Using the array index as a key is discouraged because it can lead to incorrect component state and rendering issues when the list order changes.

Good keys are usually IDs from your data. If items do not have stable IDs, you can generate them, but they should remain consistent across renders.

Without proper keys, React may re-use component instances incorrectly, leading to bugs where component state is mixed up or where the UI does not update as expected when items are reordered or removed.

## What happens if you mutate state directly?

If you mutate state directly without using the state setter function, React will not detect the change and will not trigger a re-render. This is because React compares state using reference equality.

For example, if you modify an array or object directly and then call the setter with the same reference, React will think nothing has changed.

The correct approach is to create a new array or object with the updated values and pass it to the state setter. You can use spread operators, `Array.map`, `Array.filter`, or `Object.assign` to create new references.

Mutating state can also cause bugs in components that rely on previous state values or in concurrent rendering scenarios where React might batch updates.

## How do you structure a React project?

I structure React projects by organizing files based on features or domains rather than file types. This keeps related components, hooks, and utilities together, making them easier to find and maintain.

Common folders include `components` for reusable UI components, `pages` or `routes` for top-level page components, `hooks` for custom hooks, `utils` for helper functions, and `contexts` for Context providers.

Within feature folders, I group related components, tests, and styles together. For example, a `UserProfile` feature might contain `UserProfile.jsx`, `UserProfile.module.css`, and `UserProfile.test.js`.

I also separate business logic from presentation by keeping components focused on rendering and moving complex logic into custom hooks or utility functions. This makes components easier to test and reuse.

## What mistakes have you personally made in React?

One common mistake I made early on was mutating state directly instead of creating new references, which caused components not to re-render when I expected them to.

I also struggled with `useEffect` dependencies at first, either causing infinite loops by missing dependencies or including unnecessary dependencies that caused effects to run too often.

Another issue was prop drilling in deeply nested components before I understood how to use Context API or when to lift state up effectively.

I have also passed new object or function references as props without memoization, causing unnecessary re-renders in child components. Learning when to use `useMemo` and `useCallback` helped address this.

These mistakes taught me to think carefully about state management, dependency arrays, and how React handles references and re-renders.
