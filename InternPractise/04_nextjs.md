# Next.js

## Why use Next.js instead of plain React?

Next.js solves several problems that React alone does not address. React is a library for building user interfaces, but it does not include built-in solutions for routing, server-side rendering, or static site generation.

Next.js provides a file-based routing system, eliminating the need to manually configure routes. It also enables server-side rendering and static site generation, which improve initial page load performance and SEO compared to client-side rendered React applications.

Next.js also includes optimizations like automatic code splitting, image optimization, and built-in CSS support. These features reduce the setup required to build production-ready applications.

For applications that need good SEO, fast initial loads, or a mix of static and dynamic content, Next.js provides these capabilities out of the box while maintaining React's component-based architecture.

## What is server-side rendering?

Server-side rendering (SSR) is the process of generating the HTML for a page on the server for each request, rather than in the browser.

When a user requests a page, the server runs the React components, generates the complete HTML, and sends it to the browser. The browser displays this HTML immediately, providing faster initial page loads and better SEO since search engines can crawl the content.

After the HTML loads, React hydrates the page by attaching event handlers and making it interactive. This process combines the benefits of fast initial rendering with the interactivity of a single-page application.

SSR is useful for pages with dynamic content that changes frequently or needs to be personalized for each user, where pre-generating static pages is not practical.

## What is static site generation?

Static site generation (SSG) is the process of pre-generating HTML pages at build time rather than at request time or in the browser.

During the build process, Next.js runs the page components, fetches any required data, and generates HTML files for each page. These files are then served directly to users without additional processing.

SSG provides the fastest possible page loads because the HTML is ready immediately, with no server processing or data fetching required at request time. It is ideal for content that does not change frequently, like blog posts, documentation, or marketing pages.

Next.js also supports incremental static regeneration, which allows updating static pages after deployment without rebuilding the entire site.

## Difference between SSR, SSG, and CSR?

Client-side rendering (CSR) is traditional React behavior where the browser receives minimal HTML and JavaScript that builds the UI dynamically. This can result in slower initial loads and poor SEO since the content is not available until JavaScript executes.

Server-side rendering (SSR) generates HTML on the server for each request. This provides fast initial page loads and good SEO but requires server resources for every request and introduces server response time.

Static site generation (SSG) pre-generates HTML at build time. This provides the fastest page loads and works well with CDNs but is only suitable for content that does not change frequently or can be regenerated periodically.

Next.js allows mixing these approaches within the same application. You can use SSG for mostly static pages, SSR for dynamic content, and CSR for highly interactive features.

## What is the Next.js routing system?

Next.js uses file-based routing where the folder and file structure in the `pages` or `app` directory automatically determines the application's routes.

In the Pages Router, creating `pages/about.js` creates a `/about` route. Dynamic routes use square brackets, like `pages/posts/[id].js`, which matches `/posts/1`, `/posts/2`, etc.

In the newer App Router, folders define route segments and special files like `page.js` define the UI for that route. Layouts, loading states, and error boundaries can be defined at any level of the route hierarchy.

This approach eliminates the need for manual route configuration and makes the application structure clear and predictable.

## What is the App Router vs Pages Router?

The Pages Router is the original Next.js routing system where each file in the `pages` directory becomes a route. Data fetching uses methods like `getServerSideProps` and `getStaticProps`.

The App Router is the newer system introduced in Next.js 13, built on React Server Components. It uses the `app` directory where folders define routes and special files define different parts of the UI.

The App Router provides better support for layouts, loading states, error boundaries, and streaming. It also introduces Server Components by default, which run only on the server and reduce client-side JavaScript.

The App Router offers more flexibility in how pages are structured and rendered, but the Pages Router is still supported and widely used. Both can coexist in the same application during migration.

## What runs on the server vs the client in Next.js?

In the Pages Router, code in `getServerSideProps` and `getStaticProps` runs only on the server during build or request time. Component code runs on both server (for initial HTML generation) and client (for hydration and interactivity).

In the App Router with Server Components, components are server-side by default. They run only on the server, can access databases directly, and their code is not sent to the client. Client Components are marked with `"use client"` and behave like traditional React components.

API routes in the `pages/api` or `app/api` directory always run on the server and can be used for backend logic like database queries or third-party API calls.

Understanding this distinction is important for security (keeping API keys server-side), performance (reducing client JavaScript), and architecture (deciding where to fetch data).

## How does hydration work?

Hydration is the process where React attaches event handlers and makes a server-rendered HTML page interactive.

When Next.js sends server-rendered HTML to the browser, it includes this HTML along with the necessary JavaScript bundles. The browser displays the HTML immediately, so users see content fast.

Then React runs on the client, recreates the component tree from the HTML, and attaches event listeners to make the page interactive. React verifies that the server-rendered HTML matches what would be rendered on the client.

If there are mismatches between server and client rendering, React logs warnings. These can occur when using browser-specific APIs during server rendering or when randomizing content without consistent logic.

## What are API routes?

API routes allow you to create backend endpoints within your Next.js application without needing a separate server.

In the Pages Router, files in `pages/api` become API endpoints. A file at `pages/api/users.js` is accessible at `/api/users`. Each file exports a handler function that receives request and response objects.

In the App Router, Route Handlers in the `app` directory provide similar functionality using standard Web API Request and Response objects.

API routes run on the server and can access databases, call external APIs, perform authentication, and handle any backend logic. They are useful for building full-stack applications within Next.js.

## What happens during a Next.js build?

During a Next.js build, the framework analyzes your application, pre-renders pages where possible, optimizes assets, and prepares the application for deployment.

For pages using static site generation, Next.js executes `getStaticProps`, fetches data, renders components, and generates HTML files. For dynamic routes with `getStaticPaths`, it generates pages for all specified paths.

Next.js also performs optimizations like code splitting (creating separate JavaScript bundles for each page), tree shaking (removing unused code), and asset optimization (compressing images and CSS).

The output is placed in the `.next` folder, which contains the optimized production build ready to be served. This includes HTML files for static pages, JavaScript bundles, and configuration for the server runtime.

## How does Next.js improve performance?

Next.js improves performance through automatic code splitting, where each page only loads the JavaScript it needs rather than the entire application bundle.

Image optimization with the `next/image` component automatically resizes, optimizes, and serves images in modern formats, reducing bandwidth and improving load times.

Static site generation and incremental static regeneration reduce server load and provide instant page loads by pre-generating HTML.

Font optimization automatically inlines font CSS and eliminates external network requests, reducing layout shift. Prefetching automatically loads pages linked on the current page in the background for instant navigation.

These optimizations work automatically without requiring manual configuration, making it easier to build fast applications.

## What problems did you face using Next.js?

Initially, I found the distinction between server and client components in the App Router confusing, particularly understanding when to use `"use client"` and how to pass data between server and client components.

I also struggled with hydration errors when I first started, usually caused by differences between server and client rendering or using browser-specific APIs incorrectly.

Understanding the data fetching patterns and when to use SSR versus SSG was challenging at first. I had to learn when each approach was appropriate based on content update frequency and user requirements.

Deployment and environment configuration took some trial and error, particularly setting up environment variables correctly for different build and runtime stages.

## Tell me about the MedFree project

MedFree is a healthcare platform I built to help users find free medical services in their area. The goal was to make healthcare information more accessible, particularly for people who need low-cost or free medical care.

I used Next.js for this project because I needed good SEO for healthcare information to be discoverable through search engines, and server-side rendering provided better initial load performance than a pure client-side React application.

The application includes features for browsing available services, filtering by location and service type, and viewing detailed information about each provider. I implemented the routing using Next.js file-based routing and managed state with React hooks.

This project taught me how to structure a Next.js application, handle data fetching, and think about user experience in applications where performance and discoverability are critical.

## What was your exact contribution to MedFree?

I was responsible for the complete development of MedFree, including architecture decisions, implementation, and deployment.

I designed the component structure, implemented the routing and page layouts using Next.js, and built the user interface for browsing and filtering medical services.

I handled data fetching and state management, implemented the search and filter functionality, and ensured the application was responsive and worked well on different devices.

I also configured the deployment, set up the domain and hosting, and tested the application to ensure it functioned correctly in production.

## What would you change if you rebuilt MedFree today?

If I rebuilt MedFree today, I would use the Next.js App Router instead of the Pages Router to take advantage of Server Components and the improved routing and layout features.

I would implement a more robust data fetching strategy, possibly using a database or CMS for managing service information rather than static data, allowing easier updates without redeploying.

I would add comprehensive error handling and loading states to improve user experience, particularly for slower network conditions.

I would also add testing from the start, including unit tests for components and integration tests for key user flows, which I did not prioritize in the initial version.

Finally, I would improve accessibility by ensuring proper semantic HTML, keyboard navigation, and screen reader support throughout the application.
