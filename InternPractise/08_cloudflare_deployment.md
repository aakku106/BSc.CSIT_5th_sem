# Cloudflare, Deployment, and Infrastructure

## What is DNS?

DNS (Domain Name System) is the system that translates human-readable domain names like `example.com` into IP addresses that computers use to locate servers on the internet.

When you type a URL into a browser, DNS servers look up the corresponding IP address so your browser knows which server to connect to. This happens transparently in the background.

DNS is hierarchical, with root servers at the top, top-level domain servers (like `.com`), and authoritative name servers for specific domains. This distributed system makes the internet scalable and resilient.

Without DNS, we would need to remember numerical IP addresses for every website, making the internet much less user-friendly.

## What is Cloudflare?

Cloudflare is a content delivery network (CDN) and internet infrastructure company that provides services including DNS management, DDoS protection, SSL/TLS certificates, and performance optimization.

When you use Cloudflare, it sits between your website visitors and your server. It caches content globally, serves it from locations closer to users, and filters malicious traffic before it reaches your server.

Cloudflare's free tier provides fast DNS resolution, automatic HTTPS, basic security features, and global content caching, making it popular for hosting static sites and improving website performance.

It also offers developer-friendly features like serverless functions (Workers), key-value storage, and analytics without requiring complex infrastructure setup.

## Why did you use Cloudflare?

I used Cloudflare for hosting my personal website because it provides fast, reliable DNS management and free SSL certificates without requiring complex configuration.

The Cloudflare Pages service made it easy to deploy static sites directly from a Git repository with automatic builds and deployments whenever I push changes.

Cloudflare's global CDN ensures my website loads quickly for visitors regardless of their location by serving content from nearby edge servers.

The platform also provides security features like DDoS protection and automatic HTTPS, which are important even for simple personal websites. The free tier covers all my needs without requiring payment or credit card information.

## What is a domain?

A domain is a human-readable address that identifies a website on the internet. It provides a memorable way to access web resources instead of using numeric IP addresses.

Domains are structured hierarchically with the top-level domain (like `.com`, `.org`, `.np`) on the right, and subdomains separated by dots moving left. For example, in `blog.example.com`, `.com` is the TLD, `example` is the second-level domain, and `blog` is a subdomain.

Domains are registered through domain registrars for a recurring fee (typically annually). Registration gives you the right to use that domain and configure its DNS settings.

A domain by itself does not host content—it is just a name. You configure DNS records to point the domain to the servers that actually host your website or application.

## What is a subdomain?

A subdomain is a prefix added to a domain name to create a separate section or service within the same domain. For example, `blog.example.com` and `shop.example.com` are subdomains of `example.com`.

Subdomains can point to different servers or applications than the main domain. They are useful for organizing different parts of a website, hosting different applications, or creating development and staging environments.

Creating a subdomain typically only requires adding DNS records—you do not need to register subdomains separately like you do with domains.

Subdomains can have their own SSL certificates and can be managed independently, though they are associated with the parent domain from a DNS perspective.

## How does DNS resolution work (high level)?

When you request a website, your computer first checks its local DNS cache to see if it already knows the IP address. If not, it queries a DNS resolver (usually provided by your ISP or a service like Cloudflare or Google).

The resolver queries the root DNS servers to find out which servers handle the top-level domain (like `.com`). Those servers then point to the authoritative name servers for the specific domain.

The authoritative name server for the domain provides the actual IP address or other DNS records. The resolver caches this information and returns it to your computer.

Your browser then uses the IP address to establish a connection to the server and request the website. DNS resolution typically happens in milliseconds and is cached at multiple levels to improve performance.

## What records have you configured? (A, CNAME, etc.)

I have configured A records, which map domain names to IPv4 addresses. These point my domain to the server or service hosting my website.

I have also worked with CNAME records, which create aliases from one domain name to another. These are useful for pointing subdomains to the main domain or to external services.

I have set up MX records when configuring email for a domain, which specify the mail servers that handle email for that domain.

I have also configured TXT records for domain verification and security features like SPF records, which help prevent email spoofing.

Understanding these record types helps manage how domains point to services and ensures proper routing of web traffic and email.

## How long does DNS propagation take?

DNS propagation refers to the time it takes for DNS changes to spread across the internet's DNS servers. This typically takes anywhere from a few minutes to 48 hours, though most changes propagate much faster in practice.

The delay exists because DNS servers cache records based on their TTL (Time To Live) setting. Until the TTL expires, servers continue serving the old information from their cache.

Before making DNS changes, you can lower the TTL to reduce propagation time. After changes propagate, you can raise it again to improve performance by allowing longer caching.

Modern DNS providers like Cloudflare have fast propagation times, often under a few minutes for their own servers, though it can still take longer for all global DNS servers to update.

## What problems did you face while setting up your domain?

Initially, I found the DNS configuration process confusing, particularly understanding which records to create and what values to use. Documentation from different services used different terminology, which added to the confusion.

Getting SSL certificates configured properly required understanding the difference between DNS-based and HTTP-based validation, and ensuring the domain was pointing correctly before certificates could be issued.

I also encountered issues with DNS propagation where changes did not take effect immediately, which made it difficult to test whether my configuration was correct or whether I just needed to wait longer.

Understanding how to configure both the root domain and subdomains to work together, and how to set up redirects from www to non-www versions, required trial and error.

## Why not just use default GitHub Pages DNS?

Using a custom domain instead of the default GitHub Pages URL provides a more professional appearance and better branding for personal projects.

Custom domains are easier to remember and share than automatically generated URLs. They also remain consistent even if you move hosting providers, whereas platform-specific URLs tie you to that platform.

Having a custom domain also allows more control over DNS configuration, including setting up email addresses with the same domain and creating subdomains for different projects.

Using Cloudflare with a custom domain also provides performance benefits through its CDN and security features that default GitHub Pages DNS does not offer.

## What does Cloudflare actually sit between?

Cloudflare sits between website visitors (clients) and the origin server that hosts your actual website or application.

When someone requests your website, the DNS points to Cloudflare's servers first. Cloudflare processes the request, potentially serving cached content from its CDN, filtering malicious traffic, and applying security rules.

If Cloudflare needs to fetch content from your origin server, it makes that request on behalf of the visitor and returns the response. This proxying allows Cloudflare to cache content, hide your origin server's IP address, and protect against attacks.

This architecture makes Cloudflare effective as both a CDN (for performance) and a security layer (protecting against DDoS and other threats) without requiring changes to your application code.
