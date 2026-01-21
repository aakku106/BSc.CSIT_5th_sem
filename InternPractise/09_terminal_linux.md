# Terminal, Linux, and Development Environment

## Why terminal-centric workflow?

I use a terminal-centric workflow because it provides direct control over development tools and makes repetitive tasks faster through commands and scripts.

The terminal is more efficient for tasks like navigating directories, managing Git repositories, running build tools, and executing programs. Commands can be combined, automated with scripts, and are consistent across different projects.

Many development tools are designed primarily for the command line, and understanding how to use them in the terminal provides access to their full capabilities. GUI tools often expose only a subset of features.

Working in the terminal also helps me understand what tools actually do under the hood, rather than relying on abstractions provided by graphical interfaces. This knowledge transfers across different environments and makes troubleshooting easier.

## What shell do you use?

I use zsh (Z shell) as my primary shell. It is the default shell on macOS and provides powerful features like better tab completion, command history searching, and customization options.

Zsh has features that improve productivity, including shared command history across sessions, spelling correction, and the ability to use plugins and themes through frameworks like Oh My Zsh.

The shell provides improved globbing patterns for matching files and supports useful shortcuts for navigation and command editing.

While bash is more universally available on Linux systems, zsh provides a better interactive experience for daily development work while remaining compatible with most bash scripts.

## What commands do you use daily?

I use `cd` to navigate directories, `ls` to list files, and `pwd` to check my current location. These are fundamental for moving around the filesystem.

For Git, I use `git status`, `git add`, `git commit`, `git push`, `git pull`, and `git log` frequently to manage version control.

I use `npm` or `yarn` commands for managing JavaScript projects, including installing dependencies, running development servers, and building projects.

I also use `cat` or `less` to view file contents, `grep` to search within files, `mkdir` to create directories, and `rm` to remove files. For code editing, I launch my editor with commands like `code` for VS Code.

## Difference between relative and absolute paths?

An absolute path specifies the complete location of a file or directory from the filesystem root. On macOS and Linux, it starts with a forward slash, like `/Users/username/projects/app`.

A relative path specifies a location relative to the current directory. It does not start with a slash. For example, `./src/components` refers to a `components` folder inside the `src` folder within the current directory.

Special symbols include `.` for the current directory, `..` for the parent directory, and `~` for the home directory. These make relative paths more convenient for navigation.

Absolute paths are unambiguous and work from anywhere, while relative paths are shorter and more portable since they do not depend on the specific system structure.

## What is SSH?

SSH (Secure Shell) is a protocol for securely connecting to remote computers over a network. It encrypts all communication, preventing eavesdropping or tampering.

SSH is commonly used to access remote servers, execute commands on them, transfer files, and manage systems remotely. It replaces older, insecure protocols like Telnet.

When you connect via SSH, you authenticate using either a password or SSH keys. The connection establishes a secure channel where you can interact with the remote system as if you were sitting at its terminal.

SSH is essential for deploying applications, managing cloud servers, and accessing development environments hosted remotely.

## How does SSH authentication work (basic idea)?

SSH supports password authentication, where you provide your username and password to log into the remote system. However, this is less secure and less convenient for automation.

SSH key authentication uses cryptographic key pairs: a private key you keep on your computer and a public key placed on the server. The private key proves your identity without transmitting any secret information over the network.

When connecting, the server verifies you control the private key corresponding to the authorized public key without the private key ever leaving your computer. This is more secure than passwords and allows passwordless login.

SSH keys are generated using tools like `ssh-keygen`. The public key is added to the server's authorized keys file, and the private key is kept secure on your local machine.

## What is YAML used for?

YAML (YAML Ain't Markup Language) is a human-readable data serialization format commonly used for configuration files.

YAML uses indentation to represent structure, making it easy to read and write compared to formats like JSON or XML. It supports key-value pairs, lists, and nested structures.

YAML is widely used in configuration files for tools like Docker Compose, Kubernetes, CI/CD pipelines (GitHub Actions, GitLab CI), and application configuration.

The format is sensitive to indentation and whitespace, which can cause errors if not formatted correctly. Understanding YAML syntax is important for configuring modern development and deployment tools.

## Where have you seen YAML in real tools?

I have encountered YAML in GitHub Actions workflow files for automating tasks like running tests and deploying code. These `.yml` files in the `.github/workflows` directory define the automation steps.

I have also seen YAML in Docker Compose files for defining multi-container applications, specifying services, networks, and volumes.

Configuration files for various tools and frameworks often use YAML because it is more readable than JSON for complex, nested configurations.

Package manager files and application configuration in some frameworks also use YAML for settings that need to be human-editable.

## What is Docker used for?

Docker is a platform for containerizing applications, packaging them with all their dependencies into isolated units called containers that run consistently across different environments.

Containers include the application code, runtime, libraries, and system tools needed to run the application. This eliminates "it works on my machine" problems by ensuring the same environment in development, testing, and production.

Docker is used to simplify deployment, enable microservices architectures where different services run in separate containers, and provide consistent development environments for teams.

Containers are lightweight compared to virtual machines because they share the host operating system kernel, making them faster to start and more efficient.

## What is Kubernetes (very high level)?

Kubernetes is a container orchestration platform that manages the deployment, scaling, and operation of containerized applications across clusters of machines.

While Docker runs containers on a single machine, Kubernetes coordinates containers across many machines, handling load balancing, scaling, and fault tolerance automatically.

Kubernetes manages which containers run on which servers, restarts failed containers, scales applications up or down based on demand, and handles networking between containers.

It is commonly used in production environments for running large-scale applications that need high availability, automatic scaling, and efficient resource utilization.

## Why are Docker and Kubernetes important even for frontend?

Understanding Docker helps frontend developers create consistent development environments, ensuring all team members use the same Node.js version, dependencies, and tooling.

Containerizing frontend build processes makes CI/CD pipelines more reliable and reproducible. Builds happen in isolated containers with known configurations, reducing environment-specific issues.

Modern deployment often involves serving frontend applications through containers, even if they are just static files. Understanding how containers work helps debug deployment issues.

Kubernetes knowledge helps frontend developers understand how their applications are deployed, scaled, and monitored in production, enabling better collaboration with operations teams and more informed architectural decisions.

Even if you do not directly manage containers as a frontend developer, understanding these tools helps you work effectively in modern development workflows and communicate with backend and DevOps team members.
