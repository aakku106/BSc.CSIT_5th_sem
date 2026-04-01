
                  GITHUB CORE SYSTEM - ER DIAGRAM

 +------------------------+              +----------------------------+
 |        USER            |              |      ORGANIZATION          |
 +------------------------+              +----------------------------+
 | PK  user_id            |  1    M      | PK  org_id                 |
 |     username           |<------------>|     org_name               |
 |     email              | (Membership) |     description            |
 |     password_hash      |              |     plan_type              |
 |     avatar_url         |              |     created_at             |
 |     bio                |              +-------------+--------------+
 |     created_at         |                            |
 +----------+-------------+                            | Owns (1:N)
            |                                          |
            | Owns (1:N)                               |
            |              +---------------------------+
            +------------->|
                           |        REPOSITORY
                           +----------------------------+
                           | PK  repo_id               |
                           |     repo_name             |
                           |     description           |
                           |     visibility            |
                           |     default_branch        |
                           | FK  owner_user_id -> User |
                           | FK  owner_org_id  -> Org  |
                           |     language              |
                           | FK  forked_from -> Repo   |
                           |     created_at            |
                           +------+----------+---------+
                                  |          |
                        Has N     |          |  Has N
                                  |          |
              +-------------------+          +--------------------+
              |                                                   |
              v                                                   v
 +------------------------+               +------------------------+
 |    CONTRIBUTOR         |               |    PULL_REQUEST        |
 | (User <-> Repo)        |               +------------------------+
 +------------------------+               | PK  pr_id              |
 | PK  contributor_id     |               | FK  repo_id -> Repo    |
 | FK  user_id -> User    |               | FK  author_id -> User  |
 | FK  repo_id -> Repo    |               |     title              |
 |     commit_count       |               |     status             |
 |     first_commit_at    |               |     source_branch      |
 |     last_commit_at     |               |     target_branch      |
 +------------------------+               |     created_at         |
                                          +————————————+









 +------------------------+               +------------------------+
 |       COMMIT           |               |        ISSUE           |
 +------------------------+               +------------------------+
 | PK  commit_sha         |               | PK  issue_id           |
 | FK  repo_id -> Repo    |               | FK  repo_id -> Repo    |
 | FK  author_id -> User  |               | FK  reporter_id -> User|
 |     message            |               |     title              |
 |     branch             |               |     description        |
 |     timestamp          |               |     status             |
 | FK  pr_id -> PR        |               |     labels             |
 +------------------------+               |     created_at         |
                                          +------------------------+

 +------------------------------------+
 |        ORG_MEMBERSHIP              |
 |   (User <-> Organization)          |
 +------------------------------------+
 | PK  membership_id                  |
 | FK  user_id -> User                |
 | FK  org_id  -> Organization        |
 |     role (Owner/Member/Billing)    |
 |     joined_at                      |
 +------------------------------------+

Fig: Entity Relationship Diagram for GitHub Core System
