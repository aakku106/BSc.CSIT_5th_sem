# Projects - Personal Website

## Why did you build your personal website?

I built my personal website to have a professional online presence where I can showcase my projects, skills, and experience in a way that I fully control.

Having a personal website demonstrates technical capability beyond just listing skills on a resume. It shows I can build, deploy, and maintain a real web application accessible to anyone.

The website serves as a portfolio where potential employers or collaborators can see my work, read about my background, and understand my technical interests and capabilities.

Building it also provided hands-on experience with the complete process of creating a web application—from design and development through deployment, domain configuration, and ongoing maintenance.

## What tech stack did you use?

I used Next.js as the framework for my personal website, taking advantage of its server-side rendering capabilities, built-in routing, and performance optimizations.

For styling, I used modern CSS techniques and potentially a CSS framework or styling solution that integrates well with React components, ensuring the site is responsive and works well on different devices.

The website is built with React components, allowing me to create reusable UI elements and manage the site's structure in a maintainable way.

I deployed the site using Cloudflare Pages, which provides automatic builds from my Git repository, global CDN distribution, and free SSL certificates.

## How is it hosted?

My personal website is hosted on Cloudflare Pages, which provides static site hosting with automatic deployments from a Git repository.

Every time I push changes to my repository, Cloudflare automatically builds and deploys the updated site. This continuous deployment approach means I do not need to manually upload files or manage server configurations.

Cloudflare serves the site through its global CDN, meaning visitors get content from nearby edge locations for faster load times regardless of where they are located.

The hosting includes automatic HTTPS, custom domain support, and preview deployments for branches, making it easy to test changes before deploying to production.

## What did you configure manually?

I manually configured the custom domain by setting up DNS records to point my domain to Cloudflare's servers. This involved creating A and CNAME records with the correct values.

I configured the build settings in Cloudflare Pages, specifying the build command for my Next.js application and the output directory where the built files are located.

I also configured environment variables if needed for the build process, ensuring API keys or configuration values are set correctly for production.

SSL certificate configuration was mostly automatic through Cloudflare, but I verified that HTTPS was enforced and that redirects from HTTP to HTTPS were working correctly.

## What broke during setup?

Initially, DNS propagation delays made it difficult to verify whether my configuration was correct or whether I just needed to wait longer for changes to take effect.

I encountered build failures when first setting up automatic deployments because the build environment configuration did not match my local setup. I had to adjust build commands and ensure all dependencies were specified correctly.

Getting the routing to work properly with a custom domain required understanding how Next.js handles paths and ensuring the configuration matched how Cloudflare serves the site.

I also had issues with environment variables not being available during the build process, which required understanding the difference between build-time and runtime environment variables in Next.js.

## How do you update it?

Updating the website is straightforward thanks to the automated deployment pipeline. I make changes locally, commit them to Git, and push to the repository.

Cloudflare Pages automatically detects the push, runs the build process, and deploys the new version. The entire process typically takes a few minutes from pushing code to seeing changes live.

Before pushing to the main branch, I test changes locally using the Next.js development server to ensure everything works as expected and there are no build errors.

For larger changes, I create a separate branch, which triggers a preview deployment that I can review before merging to the main branch for production deployment.

## What would you improve?

I would add a content management system or use a headless CMS to make updating content easier without requiring code changes for every update.

I would improve the website's accessibility by conducting an accessibility audit, ensuring proper semantic HTML, keyboard navigation, and screen reader support throughout the site.

Adding analytics would help me understand how visitors use the site and which content is most valuable, though I would implement this in a privacy-respecting way.

I would also add a blog section with proper SEO optimization to share technical learnings and projects, which would provide value to others and improve the site's discoverability.

Performance optimization could include implementing better image loading strategies, code splitting for larger pages, and ensuring the site achieves high scores in Core Web Vitals.

## Why should I look at your website?

My website demonstrates my ability to build a complete web application from start to finish, including design, development, deployment, and infrastructure setup.

It showcases my technical skills in a practical way, showing not just that I know technologies like Next.js and React, but that I can use them to build functional, user-facing applications.

The website reflects my attention to detail in areas like responsive design, performance, and user experience. It shows how I think about presenting information and organizing content.

It also demonstrates my understanding of the full development lifecycle, including version control, automated deployments, domain management, and ongoing maintenance—skills that are valuable in professional development environments.

Looking at the website gives a more complete picture of my capabilities than a resume alone can provide.
