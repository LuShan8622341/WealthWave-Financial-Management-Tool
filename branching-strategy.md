# Wealthwave Financial Management Tool - Branching Strategy

To ensure the orderly development process and code quality of the Wealthwave financial management tool, we have established the following branching strategy.

## 1. Main Branch (`main`)
- The `main` branch is used for stable releases and should always be in a deployable state.
- Development work should never be done directly on the `main` branch; all changes must go through a Pull Request (PR) for review and merging.
- After each merge into the `main` branch, a new version tag (`tag`) should be created for version management.

## 2. Feature Branch (`feature`)
- Feature branches are used for developing new functionalities, following the naming convention `feature/feature-name`.
- Create a feature branch from the `develop` branch, and after completing the development, submit a PR to merge it back into the `develop` branch.
- Naming examples: `feature/user-authentication`, `feature/investment-analysis`.

### Creating a Feature Branch
```bash
git checkout -b feature/feature-name develop
